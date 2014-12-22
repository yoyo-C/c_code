#include <stdio.h>
#include <string.h>

int main(void){
	char zodiac[12][40];
	char *zptr[12];
	int i, j;
	char *temp;
	for (i = 0; i < 12; i++){
		scanf_s("%s", zodiac[i]);
		zptr[i] = zodiac[i];
	}
	for (i = 10; i >= 1; i--){
		for (j = 0; j <= i; j++){
			if (strcmp(zptr[j], zptr[j + 1]) > 0){
				temp = zptr[j];
				zptr[j] = zptr[j + 1];
				zptr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 12; i++){
		printf("%s\n", zptr[i]);
	}
	return 0;
}