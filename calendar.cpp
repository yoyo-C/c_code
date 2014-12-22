# include <stdio.h>
int main(void)
{	
	int days, i, s, n;
	printf("Enter number of days of a month: ");
	scanf_s("%d", &days);
	printf("Enter starting day of the week: ");
	scanf_s("%d", &s);

	for (i = 1; i < s; i++){
		printf("   ");
	}

	for (i = 1; i <= days; i++){
		printf("%3d", i);
		if ((s + i - 1) % 7 == 0){
			printf("\n");
		}
	}
	return 0;
}