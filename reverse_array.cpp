#include <iostream>
using namespace std;
int main()
{ // 数组逆序重放
	int n, i = 0, j = 0, a[100];
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];

	for (i = 0; i < n - 1; i++){
		for (j = 0; j < n - i - 1; j++){
			if (a[j] > a[j + 1]){
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}