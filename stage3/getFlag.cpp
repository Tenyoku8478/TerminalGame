#include <cstdio>

int main() {
    FILE *file;
    char buf[1024];
    int r;
    for(int i=1; i<=100; ++i) {
        sprintf(buf, "%d", i);
        file = fopen(buf, "r");
        if(file == NULL) {
            printf("Wrong file %d\n", i);
            return 0;
        }
        else {
            fscanf(file, "%d", &r);
            if(i%2==0) r /= 2;
            if(r != i) {
                printf("Wrong content %d\n", i);
                return 0;
            }
        }
    }
    printf("The flag is: ");
    putchar('C');
    putchar('h');
    putchar('i');
    putchar('e');
    putchar('6');
    putchar('\n');
    return 0;
}
