#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE *fp_cake = fopen("./cake", "r");
	FILE *fp_juice = fopen("./juice", "r");

	if(fp_cake && fp_juice) {
		printf("Thanks! Here's the flag: ");
        putchar('x');
        putchar('i');
        putchar('e');
        putchar('m');
        putchar('f');
        putchar('\n');
		fclose(fp_cake);
		fclose(fp_juice);
	}
	else {
		printf("Elise wants a piece of cake and a cup of juice...\n");
	}

	return 0;

}
