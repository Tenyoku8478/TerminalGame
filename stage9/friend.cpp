#include <cstdio>
#include <cstring>

int main() {
    char input[1024];
    for(int i=0; i<10000; ++i) {
        printf("hello?\n");
        scanf("%s", &input);
        if(strcmp(input, "hello")!=0) {
            printf("Say hello to me!\n");
            return -1;
        }
    }
    printf("Ok, the flag is: ");
    putchar('e');
    putchar('o');
    putchar('2');
    putchar('H');
    putchar('a');
    putchar('\n');
}
