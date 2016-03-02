#include <cstdio>
#include <unistd.h>

int main() {
    char sign[10], cipher[10];
    sign[0] = 'a';
    sign[1] = 'e';
    sign[2] = 'v';
    sign[3] = '9';
    sign[4] = 'o';
    sign[5] = '\0';
    cipher[0] = 'a';
    cipher[1] = 'i';
    cipher[2] = 'h';
    cipher[3] = '9';
    cipher[4] = 'U';
    cipher[5] = '\0';
    if(execlp("executable", sign, cipher, NULL) == -1) {
        puts("I have to call some commands in the directory \"bin\" under this directory.");
        puts("Please add it to PATH and try again.");
    }
    return 0;
}
