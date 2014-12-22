#include <stdio.h>
int main(void) {
	int i, n;
	char c;
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++){
		printf("%10d%10d\n", i, i * i);
		if (i % 3 == 0){
			printf("Please Enter to continue...");
			while (c = (getchar()) != '\n')
				;
		}
	}
	return 0;
}