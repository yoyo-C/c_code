#include <iostream>
using namespace std;
int main(){
	int n, a[15000];
	int tmp;
	while (cin >> n){
		if (n == 0){
			break;
		}
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++){
				int tmp2;
				if (a[i] > a[j]){
					tmp2 = a[i];
					a[i] = a[j];
					a[j] = tmp2;
				}
			}
		}
		if (n % 2 == 0){
			tmp = (a[n / 2] + a[n / 2 - 1]) / 2;
		}
		else {
			tmp = (a[(n - 1) / 2]);
		}
		cout << tmp << endl;
	}
	return 0;
}