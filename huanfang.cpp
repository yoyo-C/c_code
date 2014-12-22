#include <stdio.h>

int main(void) {
	int i,j;
	int a[4][4] = { 0 };
	int r[4] = { 0 };
	int c[4] = { 0 };
	int D[4] = { 0 };
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			scanf_s("%d", &(a[i][j]));
	}
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			r[i] += a[i][j];
			c[i] += a[j][i];
			if (j == i){
				D[0] += a[i][j];
			}
			if (j + i == 3){
				D[1] += a[i][j];
			}
		}
	}
	for (i = 0; i < 4; i++){
		printf("%d ", r[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++){
		printf("%d ", c[i]);
	}
	printf("\n");
	for (i = 0; i < 2; i++){
		printf("%d ", D[i]);
	}
	printf("\n");
	return 0;
}