#include <stdio.h>
#include <string.h>

int main(void){
	char destination[16];
	char source[80];
	printf("destination at %p\n", destination);
	printf("source at %p\n", source);
	scanf_s("%s", source);
	printf("source = %s\n", source);
	strncpy_s(destination, source, 15);
	destination[15] = '\0';
	printf("source = %s\n", source);
	printf("destination = %s\n", destination);
	return 0;
}