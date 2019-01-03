/* Xiao Qin: 
 * This is an application making the getpid system call.
 */
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int mypid;
        
	mypid = getpid();
       /* 
        * printf() does not work unless you have 
        * implemented sys_write() 
        */
        /* printf(“My PID is: %d\n”, mypid);*/
        reboot(RB_REBOOT);
 	return 0;
}
