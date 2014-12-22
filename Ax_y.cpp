#include <stdio.h>
#define N 256

void upper_solver(double *A, double *x, double *y, int n)
{
	int i, j;
	int m = n * (n + 1) / 2;
	double *X = x + n - 1;
	double *Y = y + n - 1;
	double *a = A + m - 1;
	double value_y = *Y;
	for (i = 0, j = 0; i < n; i++){
		while (j < i){
			value_y -= (*X) * (*a);
			X--;
			a--;
			j++;
		}
		*X = value_y / *a;
		X += i;
		Y--;
		a--;
		value_y = *Y;
		j = 0;
	}
}
int main(void)
{
	int i, j;
	int n;
	double A[N * (N + 1) / 2];
	double *aptr = A;
	double x[N];
	double y[N];
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		for (j = i; j < n; j++) {
		scanf_s("%lf", aptr);
		aptr++;
		}
	for (i = 0; i < n; i++)
		scanf_s("%lf", &(y[i]));
	upper_solver(A, x, y, n);

	for (i = 0; i < n; i++)
		printf("%lf ", x[i]);

	return 0;
}