#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <assert.h>
#include <errno.h>

void Test1(void)
{
	pid_t pid, wpid;
	int status = -1;

	printf("Entering %s\n", __func__);
	
	if ((pid = fork()) == 0) {
		printf("I am the child\n");
		exit(0);
	}

	printf("I am: %d\n", getpid());
	printf("Got child: %d\n", pid);

	wpid = waitpid(-1, &status, 0);

	printf("Got wpid %d status %d, wanted %d\n", wpid, status, pid);

	assert(wpid == pid);
	assert(status == 0);
}

void Test2(void)
{
	pid_t pid, wpid;
	int status = -1;

	printf("Entering %s\n", __func__);
	
	if ((pid = fork()) == 0) {
		printf("I am the child\n");
		sleep(1);
		exit(0);
	}

	printf("I am: %d\n", getpid());
	printf("Got child: %d\n", pid);

	while ((wpid = waitpid(-1, &status, WNOHANG)) == 0)
		;

	printf("Got wpid %d status %d, wanted %d\n", wpid, status, pid);

	assert(wpid == pid);
	assert(status == 0);
}

void Test3(void)
{
	pid_t pid, wpid;
	int status = -1;

	printf("Entering %s\n", __func__);

	setsid();
	setpgid(0, 0);
	
	if ((pid = fork()) == 0) {
		if (setpgid(0, 0) == -1)
			err(1, "%s: setpgid", __func__);
		printf("I am child one\n");
		exit(0);
	}

	if ((pid = fork()) == 0) {
		if (setpgid(0, getppid()) == -1)
			err(1, "%s: setpgid", __func__);
		printf("I am child two\n");
		sleep(1);
		exit(1);
	}
	
	printf("I am: %d\n", getpid());
	printf("Got child: %d\n", pid);

	while ((wpid = waitpid(0, &status, WNOHANG)) == 0)
		;

	printf("Got wpid %d status %d\n", wpid, status);

	assert(wpid == pid);
	assert(WEXITSTATUS(status) == 1);
}

int
main(void)
{
	Test1();
	Test2();
	Test3();
        exit(0);
}
