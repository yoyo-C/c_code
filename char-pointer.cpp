#include <stdio.h>
#include <string.h>

int main(void){
	char string[80];
	char *ptr = string;
	int i;
	scanf_s("%s", ptr);
	printf("%s\n", ptr);
	for (i = 0; i < strlen(ptr); i++){
		printf("%c ", ptr[i]);
	}
	return 0;
}