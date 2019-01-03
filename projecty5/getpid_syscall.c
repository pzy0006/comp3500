/* 
 * Xiao Qin:
 * This is a sample implementation of the getpid system call.
 *
 * Note: 
 * 1. You should put file related system calls in file_syscalls.c
 *    and process related system calls in proc_syscalls.c
 * 2. Add "file userprog/getpid_syscall.c" into src/kern/conf/conf.kern
 * 3. The prototype sys_getpid() is declared in src/kern/include/syscall.h
 * 4. sys_getpid() is invoked in src/kern/arch/mips/mips/syscall.c
 */
#include <types.h>
#include <syscall.h>
#include <thread.h>
#include <curthread.h>

/* 
 * You may need the following four head files to 
 * implement other process related system calls.
 */
/*#include <kern/errno.h>
#include <lib.h>
#include <pid.h>
#include <machine/trapframe.h>
*/

/*
 * Sample implementation of sys_getpid(), which is called in 
 * src/kern/arch/mips/mips/syscall.c
 */
int
sys_getpid(pid_t *retval)
{
	*retval = curthread->t_pid;
	return 0;
}
