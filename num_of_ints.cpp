#include <iostream>
using namespace std;
int main()
{ // 求整数个数
	int k, i, j, sum_1 = 0, sum_5 = 0, sum_10 = 0;
	cin >> k; // 输入整数个数
	for (i = 0; i < k; i++){ // 循环输入整数
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