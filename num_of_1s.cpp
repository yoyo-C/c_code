#include <iostream>
using namespace std;
int main()
{ // 求1的个数
	int n, i, j, sum_n;
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> j;
		for (sum_n = 0; j > 0; j /= 2){
			if (j % 2 == 1)
				sum_n++;
		}
		cout << sum_n << "\n";
	}
	cout << endl;
	return 0;
}