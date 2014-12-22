#include <stdio.h>
#include <string.h>

int main(void){
	char zodiac[12][40];
	int i, j;
	char temp[40];

	for (i = 0; i < 12; i++){
		scanf_s("%s", zodiac[i]);
	}
	for (i = 10; i >= 1; i--){
		for (j = 0; j <= i; j++){
			if (strcmp(zodiac[j], zodiac[j + 1]) > 0){
				strcpy_s(temp, zodiac[j]);
				strcpy_s(zodiac[j], zodiac[j + 1]);
				strcpy_s(zodiac[j + 1], temp);
			}
		}
	}
	for (i = 0; i < 12; i++){
		printf("%s\n", zodiac[i]);
	}
	return 0;
}