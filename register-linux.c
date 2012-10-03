/*	$OpenBSD: register.c,v 1.10 2002/08/05 14:26:07 provos Exp $	*/
/*
 * Copyright 2002 Niels Provos <provos@citi.umich.edu>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *      This product includes software developed by Niels Provos.
 * 4. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <sys/types.h>
#include <sys/param.h>
#include <sys/tree.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <err.h>

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif /* HAVE_CONFIG_H */

#include "linux-translate.h"

#include "intercept.h"
#include "systrace.h"

#define X(x)	if ((x) == -1) \
	err(1, "%s:%d: intercept failed", __func__, __LINE__)

void
systrace_initcb(void)
{
	struct systrace_alias *alias;
	struct intercept_translate *tl;

	X(intercept_init());

	X(intercept_register_gencb(gen_cb, NULL));	
 
	X(intercept_register_sccb("linux", "chown", trans_cb, NULL));
	intercept_register_transfn("linux", "chown", 0);
	intercept_register_translation("linux", "chown", 1, &ic_uidt);
	intercept_register_translation("linux", "chown", 2, &ic_gidt);
	X(intercept_register_sccb("linux", "fchown", trans_cb, NULL));
	intercept_register_translation("linux", "fchown", 0, &ic_fdt);
	intercept_register_translation("linux", "fchown", 1, &ic_uidt);
	intercept_register_translation("linux", "fchown", 2, &ic_gidt);

	X(intercept_register_sccb("linux", "fchmod", trans_cb, NULL));
	intercept_register_translation("linux", "fchmod", 0, &ic_fdt);
	intercept_register_translation("linux", "fchmod", 1, &ic_modeflags);

	X(intercept_register_sccb("linux", "chdir", trans_cb, NULL));
	intercept_register_transfn("linux", "chdir", 0);
	X(intercept_register_sccb("linux", "chroot", trans_cb, NULL));
	intercept_register_transfn("linux", "chroot", 0);

	X(intercept_register_sccb("linux", "setuid", trans_cb, NULL));
	intercept_register_translation("linux", "setuid", 0, &ic_uidt);
	intercept_register_translation("linux", "setuid", 0, &ic_uname);

	X(intercept_register_sccb("linux", "setgid", trans_cb, NULL));
	intercept_register_translation("linux", "setgid", 0, &ic_gidt);

	X(intercept_register_sccb("linux", "open", trans_cb, NULL));
	tl = intercept_register_translink("linux", "open", 0);
	intercept_register_translation("linux", "open", 1, &ic_linux_oflags);
	alias = systrace_new_alias("linux", "open", "linux", "fswrite");
	systrace_alias_add_trans(alias, tl);

	X(intercept_register_sccb("linux", "stat", trans_cb, NULL));
	tl = intercept_register_translink("linux", "stat", 0);
	alias = systrace_new_alias("linux", "stat", "linux", "fsread");
	systrace_alias_add_trans(alias, tl);
	X(intercept_register_sccb("linux", "stat64", trans_cb, NULL));
	tl = intercept_register_translink("linux", "stat64", 0);
	alias = systrace_new_alias("linux", "stat64", "linux", "fsread");
	systrace_alias_add_trans(alias, tl);

	X(intercept_register_sccb("linux", "lstat", trans_cb, NULL));
	tl = intercept_register_translink("linux", "lstat", 0);
	alias = systrace_new_alias("linux", "lstat", "linux", "fsread");
	systrace_alias_add_trans(alias, tl);
	X(intercept_register_sccb("linux", "lstat64", trans_cb, NULL));
	tl = intercept_register_translink("linux", "lstat64", 0);
	alias = systrace_new_alias("linux", "lstat64", "linux", "fsread");
	systrace_alias_add_trans(alias, tl);

	X(intercept_register_sccb("linux", "execve", trans_cb, NULL));
	intercept_register_translink("linux", "execve", 0);
	X(intercept_register_sccb("linux", "access", trans_cb, NULL));
	tl = intercept_register_translink("linux", "access", 0);
	alias = systrace_new_alias("linux", "access", "linux", "fsread");
	systrace_alias_add_trans(alias, tl);
	X(intercept_register_sccb("linux", "symlink", trans_cb, NULL));
	intercept_register_transstring("linux", "symlink", 0);
	intercept_register_translink("linux", "symlink", 1);
	X(intercept_register_sccb("linux", "link", trans_cb, NULL));
	intercept_register_translink("linux", "link", 0);
	intercept_register_translink("linux", "link", 1);
	X(intercept_register_sccb("linux", "readlink", trans_cb, NULL));
	tl = intercept_register_translink("linux", "readlink", 0);
	alias = systrace_new_alias("linux", "readlink", "linux", "fsread");
	systrace_alias_add_trans(alias, tl);
	X(intercept_register_sccb("linux", "rename", trans_cb, NULL));
	intercept_register_translation("linux", "rename", 0,
	    &ic_translate_unlinkname);
	intercept_register_translink("linux", "rename", 1);
	X(intercept_register_sccb("linux", "mkdir", trans_cb, NULL));
	tl = intercept_register_translation("linux", "mkdir", 0,
	    &ic_translate_unlinkname);
	alias = systrace_new_alias("linux", "mkdir", "linux", "fswrite");
	systrace_alias_add_trans(alias, tl);
	X(intercept_register_sccb("linux", "rmdir", trans_cb, NULL));
	tl = intercept_register_translink("linux", "rmdir", 0);
	alias = systrace_new_alias("linux", "rmdir", "linux", "fswrite");
	systrace_alias_add_trans(alias, tl);
	X(intercept_register_sccb("linux", "unlink", trans_cb, NULL));
	tl = intercept_register_translink("linux", "unlink", 0);
	alias = systrace_new_alias("linux", "unlink", "linux", "fswrite");
	systrace_alias_add_trans(alias, tl);
	X(intercept_register_sccb("linux", "chmod", trans_cb, NULL));
	intercept_register_translink("linux", "chmod", 0);
	intercept_register_translation("linux", "chmod", 1, &ic_modeflags);

	X(intercept_register_sccb("linux", "mknod", trans_cb, NULL));
	intercept_register_translation("linux", "mknod", 0,
	    &ic_translate_unlinkname);
	intercept_register_translation("linux", "mknod", 1, &ic_modeflags);

	X(intercept_register_sccb("linux", "socketcall", trans_cb, NULL));
 	tl = intercept_register_translation("linux", "socketcall", 1, &ic_linux_socket_sockdom);
	alias = systrace_new_alias("linux", "socketcall", "linux", "_socketcall");
	systrace_alias_add_trans(alias, tl);
 	tl = intercept_register_translation("linux", "socketcall", 1, &ic_linux_socket_socktype);
	systrace_alias_add_trans(alias, tl);
 	tl = intercept_register_translation("linux", "socketcall", 1, &ic_linux_connect_sockaddr);
	systrace_alias_add_trans(alias, tl);
 	tl = intercept_register_translation("linux", "socketcall", 1, &ic_linux_bind_sockaddr);
	systrace_alias_add_trans(alias, tl);
 	tl = intercept_register_translation("linux", "socketcall", 0, &ic_linux_socketcall_catchall);
	systrace_alias_add_trans(alias, tl);

	X(intercept_register_sccb("linux", "kill", trans_cb, NULL));
	intercept_register_translation("linux", "kill", 0, &ic_pidname);
	intercept_register_translation("linux", "kill", 1, &ic_signame);

	X(intercept_register_execcb(execres_cb, NULL));
	X(intercept_register_pfreecb(policyfree_cb, NULL));
}
