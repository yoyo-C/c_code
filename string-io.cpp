#include <stdio.h>

int main(void){
	int i;
	char string[10];

	while (scanf_s("%s", string) != EOF){
		printf("%s\n", string);
		for (i = 0; i < 10 && string[i] != '\0'; i++){
			printf("%c ", string[i]);
		}
		printf("\n");
	}
	return 0;
}