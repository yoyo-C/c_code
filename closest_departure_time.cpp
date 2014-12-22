# include <stdio.h>
# include <stdlib.h>
int main(void)
{	
	int a[8] = { 8 * 60, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47, 14 * 60, 15 * 60 + 45, 19 * 60, 21 * 60 + 45};
	int h, m, n, i;
	int min;
	printf("Enter a 24-hour time: ");
	scanf_s("%d:%d", &h, &m);
	m += h * 60;
	for (i = 0; i < 8; i++){
		a[i] = abs(a[i] - m);
	}
	for (i = 0, min = a[0]; i < 8; i++){
		if (min > a[i]){
			min = a[i];
			n = i;
		}
	}
	switch (n)
	{
	case 0: printf("Closest departure time is 8:00 a.m., arriving time at 10:16 a.m."); break;
	case 1: printf("Closest departure time is 9:43 a.m., arriving time at 11:52 a.m."); break;
	case 2: printf("Closest departure time is 11:19 a.m., arriving time at 1:31 p.m."); break;
	case 3: printf("Closest departure time is 12:47 p.m., arriving time at 3:00 p.m."); break;
	case 4: printf("Closest departure time is 2:00 p.m., arriving time at 4:08 p.m."); break;
	case 5: printf("Closest departure time is 3:45 p.m., arriving time at 5:55 p.m."); break;
	case 6: printf("Closest departure time is 7:00 p.m., arriving time at 9:20 p.m."); break;
	case 7: printf("Closest departure time is 9:45 p.m., arriving time at 11:58 p.m."); break;
	}
	return 0;
}