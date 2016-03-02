#include <cstdio>
#include <cstring>
#include <unistd.h>
#include <sys/wait.h>

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
        strcpy(argv[0], "myProc");
        while(true) {
            sleep(10);
        }
    }
    return 0;
}
