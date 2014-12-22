#include <iostream>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int a[100];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int b[100];
	for (int i = 0; i < m; i++){
		b[i] = a[n - m + i];
	}
	for (int i = 0; i < (n - m); i++){
		a[n - 1 - i] = a[n - m - 1 - i];
	}
	for (int i = 0; i < m; i++){
		a[i] = b[i];
	}
	for (int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
	return 0;
}