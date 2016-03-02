#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int a[1000], b[1000];
char buf[1000];

bool test(int i) {
    sprintf(buf, "./biggerNum.sh listAAA listBBB %d", i+1);
    FILE *pip = popen(buf, "r");
    if(pip==NULL) {
        puts("Can't execute biggerNum.sh");
        exit(-1);
    }
    else {
        int ans;
        fscanf(pip, "%d", &ans);
        pclose(pip);
        return ans == max(a[i], b[i]);
    }
    return false;
}

int main() {
    srand(time(NULL));
    FILE *af = fopen("listAAA", "w");
    FILE *bf = fopen("listBBB", "w");
    for(int i=0; i<1000; ++i) {
        a[i] = rand();
        b[i] = rand();
        fprintf(af, "%d\n", a[i]);
        fprintf(bf, "%d\n", b[i]);
    }
    fclose(af);
    fclose(bf);
    for(int i=0; i<30; ++i) {
        if(!test(rand()%1000)) {
            puts("Wrong answer");
            exit(-1);
        }
    }
    remove("listAAA");
    remove("listBBB");
    printf("The flag is: ");
    putchar('P');
    putchar('o');
    putchar('o');
    putchar('0');
    putchar('N');
    putchar('\n');
}
