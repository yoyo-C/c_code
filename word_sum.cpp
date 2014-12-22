#include <stdio.h>
#include <ctype.h>
int main(void) {
	char c;
	int sum = 0;
	
	printf("Enter a word: ");
	while ((c = getchar()) != '\n'){
		c = toupper(c);
		if (c == 'Q' || c == 'Z'){
			sum += 10;
		}
		else if (c == 'J' || c == 'X'){
			sum += 8;
		}
		else if (c == 'K'){
			sum += 5;
		}
		else if (c == 'F' || c == 'V' || c == 'W' || c == 'Y' || c == 'H'){
			sum += 4;
		}
		else if (c == 'B' || c == 'C' || c == 'M' || c == 'P'){
			sum += 3;
		}
		else if (c == 'D' || c == 'G'){
			sum += 2;
		}
		else {
			sum += 1;
		}
	}
	printf("%d", sum);
	return 0;
}