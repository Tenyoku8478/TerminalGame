#include <cstdio>
#include <cstring>

const char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
const int aSize = 62;
inline int getInd(char ch) {
    for(int i=0; i<aSize; ++i)
        if(ch == alphabet[i])
            return i;
    return -1;
}
inline char* encrypt(char *plan, const char *key) {
    for(int i=0; plan[i]; ++i) {
        plan[i] = alphabet[(getInd(plan[i])+getInd(key[i]))%aSize];
    }
    return plan;
}

int main(int argc, char *argv [])
{
    if(argc != 2 || strcmp(encrypt(argv[0], "ohTh7"), "olegl")!=0) {
        puts("You can't execute this file directly.");
    }
    else {
        printf("The flag is: %s\n", encrypt(argv[1], "Ur8me"));
    }
    return 0;
}
