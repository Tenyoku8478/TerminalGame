#include <cstdio>
#include <cstring>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/prctl.h>

int main(int argc, char *argv []) {
    puts("kill the process \"myProc\" and I will give you the flag.");
    int pid;
    if((pid=fork())!=0) {//parant
        wait(NULL);
        printf("The flag is: ");
        putchar('E');
        putchar('i');
        putchar('j');
        putchar('1');
        putchar('n');
        putchar('\n');
    }
    else {
        prctl(PR_SET_NAME, (unsigned long)"myProc", 0, 0, 0);
        while(true) {
            sleep(10);
        }
    }
    return 0;
}
