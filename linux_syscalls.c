/*
 * Copyright (c) 2002 Marius Aamodt Eriksen <marius@umich.edu>
 */

/*
 * this file emulates openbsd's syscallnames[] array.  linux does not
 * have such a feature.  automatically generated from
 * arch/i386/kernel/entry.S
 */

char *linux_syscallnames[] = {
	"ni_syscall-1"
	"exit",
	"fork",
	"read",
	"write",
	"open",             /* 5 */
	"close",
	"waitpid",
	"creat",
	"link",
	"unlink",           /* 10 */
	"execve",
	"chdir",
	"time",
	"mknod",
	"chmod",            /* 15 */
	"lchown16",
	"ni_syscall-2",                       /* old break syscall holder */
	"stat",
	"lseek",
	"getpid",           /* 20 */
	"mount",
	"oldumount",
	"setuid16",
	"getuid16",
	"stime",            /* 25 */
	"ptrace",
	"alarm",
	"fstat",
	"pause",
	"utime",            /* 30 */
	"ni_syscall-3",       /* old stty syscall holder */
	"ni_syscall-4",       /* old gtty syscall holder */
	"access",
	"nice",
	"ni_syscall-5",       /* 35 */   /* old ftime syscall holder */
	"sync",
	"kill",
	"rename",
	"mkdir",
	"rmdir",            /* 40 */
	"dup",
	"pipe",
	"times",
	"ni_syscall-6",       /* old prof syscall holder */
	"brk",              /* 45 */
	"setgid16",
	"getgid16",
	"signal",
	"geteuid16",
	"getegid16",        /* 50 */
	"acct",
	"umount",           /* recycled never used phys() */
	"ni_syscall-7",       /* old lock syscall holder */
	"ioctl",
	"fcntl",            /* 55 */
	"ni_syscall-8",       /* old mpx syscall holder */
	"setpgid",
	"ni_syscall-9",       /* old ulimit syscall holder */
	"olduname",
	"umask",            /* 60 */
	"chroot",
	"ustat",
	"dup2",
	"getppid",
	"getpgrp",          /* 65 */
	"setsid",
	"sigaction",
	"sgetmask",
	"ssetmask",
	"setreuid16",       /* 70 */
	"setregid16",
	"sigsuspend",
	"sigpending",
	"sethostname",
	"setrlimit",        /* 75 */
	"old_getrlimit",
	"getrusage",
	"gettimeofday",
	"settimeofday",
	"getgroups16",      /* 80 */
	"setgroups16",
	"old_select",
	"symlink",
	"lstat",
	"readlink",         /* 85 */
	"uselib",
	"swapon",
	"reboot",
	"old_readdir",
	"old_mmap",             /* 90 */
	"munmap",
	"truncate",
	"ftruncate",
	"fchmod",
	"fchown16",         /* 95 */
	"getpriority",
	"setpriority",
	"ni_syscall-10",       /* old profil syscall holder */
	"statfs",
	"fstatfs",          /* 100 */
	"ioperm",
	"socketcall",
	"syslog",
	"setitimer",
	"getitimer",        /* 105 */
	"newstat",
	"newlstat",
	"newfstat",
	"uname",
	"iopl",             /* 110 */
	"vhangup",
	"ni_syscall-11",       /* old "idle" system call */
	"vm86old",
	"wait4",
	"swapoff",          /* 115 */
	"sysinfo",
	"ipc",
	"fsync",
	"sigreturn",
	"clone",            /* 120 */
	"setdomainname",
	"newuname",
	"modify_ldt",
	"adjtimex",
	"mprotect",         /* 125 */
	"sigprocmask",
	"create_module",
	"init_module",
	"delete_module",
	"get_kernel_syms",  /* 130 */
	"quotactl",
	"getpgid",
	"fchdir",
	"bdflush",
	"sysfs",            /* 135 */
	"personality",
	"ni_syscall-12",       /* for afs_syscall */
	"setfsuid16",
	"setfsgid16",
	"llseek",           /* 140 */
	"getdents",
	"select",
	"flock",
	"msync",
	"readv",            /* 145 */
	"writev",
	"getsid",
	"fdatasync",
	"sysctl",
	"mlock",            /* 150 */
	"munlock",
	"mlockall",
	"munlockall",
	"sched_setparam",
	"sched_getparam",   /* 155 */
	"sched_setscheduler",
	"sched_getscheduler",
	"sched_yield",
	"sched_get_priority_max",
	"sched_get_priority_min",  /* 160 */
	"sched_rr_get_interval",
	"nanosleep",
	"mremap",
	"setresuid16",
	"getresuid16",      /* 165 */
	"vm86",
	"query_module",
	"poll",
	"nfsservctl",
	"setresgid16",      /* 170 */
	"getresgid16",
	"prctl",
	"rt_sigreturn",
	"rt_sigaction",
	"rt_sigprocmask",   /* 175 */
	"rt_sigpending",
	"rt_sigtimedwait",
	"rt_sigqueueinfo",
	"rt_sigsuspend",
	"pread",            /* 180 */
	"pwrite",
	"chown16",
	"getcwd",
	"capget",
	"capset",           /* 185 */
	"sigaltstack",
	"sendfile",
	"ni_syscall-13",       /* streams1 */
	"ni_syscall-14",       /* streams2 */
	"vfork",            /* 190 */
	"getrlimit",
	"mmap2",
	"truncate64",
	"ftruncate64",
	"stat64",           /* 195 */
	"lstat64",
	"fstat64",
	"lchown",
	"getuid",
	"getgid",           /* 200 */
	"geteuid",
	"getegid",
	"setreuid",
	"setregid",
	"getgroups",        /* 205 */
	"setgroups",
	"fchown",
	"setresuid",
	"getresuid",
	"setresgid",        /* 210 */
	"getresgid",
	"chown",
	"setuid",
	"setgid",
	"setfsuid",         /* 215 */
	"setfsgid",
	"pivot_root",
	"mincore",
	"madvise",
	"getdents64",       /* 220 */
	"fcntl64",
	"ni_syscall-15",       /* reserved for TUX */
	"ni_syscall-16",       /* Reserved for Security */
	"gettid",
	"readahead",        /* 225 */
	"setxattr",       /* reserved for setxattr */
	"lsetxattr",       /* reserved for lsetxattr */
	"fsetxattr",       /* reserved for fsetxattr */
	"getxattr",       /* reserved for getxattr */
	"lgetxattr",       /* 230 reserved for lgetxattr */
	"fgetxattr",       /* reserved for fgetxattr */
	"listxattr",       /* reserved for listxattr */
	"llistxattr",       /* reserved for llistxattr */
	"flistxattr",       /* reserved for flistxattr */
	"removexattr",       /* 235 reserved for removexattr */
	"lremovexattr",       /* reserved for lremovexattr */
	"fremovexattr",       /* reserved for fremovexattr */
	"tkill",
	"sendfile64",
        "futex",         /* 240 */
        "sched_setaffinity",
        "sched_getaffinity",
        "set_thread_area",
        "get_thread_area",
        "io_setup",      /* 245 */
        "io_destroy",
        "io_getevents",
        "io_submit",
        "io_cancel",
        "fadvise64",     /* 250 */
        "ni_syscall",
        "exit_group",
        "lookup_dcookie",
        "epoll_create",
        "epoll_ctl",     /* 255 */
        "epoll_wait",
        "remap_file_pages",
        "set_tid_address",
        "timer_create",
        "timer_settime",         /* 260 */
        "timer_gettime",
        "timer_getoverrun",
        "timer_delete",
        "clock_settime",
        "clock_gettime",         /* 265 */
        "clock_getres",
        "clock_nanosleep",
        "statfs64",
        "fstatfs64",     
        "tgkill",        /* 270 */
        "utimes",
        "fadvise64_64",
        "ni_syscall",    /* sys_vserver */
        "mbind",
        "get_mempolicy",
        "set_mempolicy",
        "mq_open",
        "mq_unlink",
        "mq_timedsend",
        "mq_timedreceive",       /* 280 */
        "mq_notify",
        "mq_getsetattr",
        "ni_syscall",            /* reserved for kexec */
        "waitid",
        "ni_syscall",            /* 285 */ /* available */
        "add_key",
        "request_key",
        "keyctl",
	"ni_syscall-31",
	"ni_syscall-32",	 /* 290 */
	"ni_syscall-33",
	"ni_syscall-34",
	"ni_syscall-35",
	"ni_syscall-36",
	"ni_syscall-37",	 /* 295 */
	"ni_syscall-38",
	"ni_syscall-39",
	"ni_syscall-40",
	"ni_syscall-41",
};
