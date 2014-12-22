#include <stdio.h>

int my_strlen(char *string){
	int i = 0;
	while (i < 80 && string[i] != '\0'){
		i++;
		return i;
	}
}
int main(void){
	int length;
	char string[80];
	scanf("%s", string);
	printf("%s\n", string);
	length = my_strlen(string);
	printf("%d\n", length);
	return 0;
}