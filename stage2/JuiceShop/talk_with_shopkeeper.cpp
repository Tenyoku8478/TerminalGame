#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE *fp_water = fopen("./water", "r");

	if(fp_water) {
		FILE *fp_juice = fopen("./juice", "w");
		printf("Thanks! I've made the juice for you.\n");
		fprintf(fp_juice, "Haha, this is a cup of juice.\n");
		fclose(fp_water);
		fclose(fp_juice);
	}
	else {
		printf("I would like to help you, but can you help me to get some water from the pond first?\n");
	}

	return 0;

}
