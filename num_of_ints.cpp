#include <iostream>
using namespace std;
int main()
{ // ����������
	int k, i, j, sum_1 = 0, sum_5 = 0, sum_10 = 0;
	cin >> k; // ������������
	for (i = 0; i < k; i++){ // ѭ����������
		cin >> j; 
		if (j == 1){
			sum_1++;
		} if (j == 5){
			sum_5++;
		} if (j == 10){
			sum_10++;
		}
	}
	cout << sum_1 << "\n";
	cout << sum_5 << "\n";
	cout << sum_10 << "\n" << endl;
	return 0;
}