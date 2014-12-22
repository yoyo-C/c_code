#include <stdio.h>
int main(void)
{
	float loan, rate, monthly_payment, monthly_rate;
	float remaining_aftr_fst_paymt, remaining_aftr_scd_paymt, remaining_aftr_thrd_paymt;
	scanf_s("%f", &loan);
	scanf_s("%f", &rate);
	scanf_s("%f", &monthly_payment);
	monthly_rate = rate / 1200.0f;
	remaining_aftr_fst_paymt = loan - monthly_payment + loan * monthly_rate;
	remaining_aftr_scd_paymt = remaining_aftr_fst_paymt - monthly_payment + monthly_rate * remaining_aftr_fst_paymt;
	remaining_aftr_thrd_paymt = remaining_aftr_scd_paymt - monthly_payment + monthly_rate * remaining_aftr_scd_paymt;
	
	printf("Balance remaining after first payment: &%.2f\n", remaining_aftr_fst_paymt);
	printf("Balance remaining after second payment: &%.2f\n", remaining_aftr_scd_paymt);
	printf("Balance remaining after third payment: &%.2f\n", remaining_aftr_thrd_paymt);
	return 0;
}