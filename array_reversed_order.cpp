#include <iostream>
using namespace std;
int main()
{ // ���������ط�
	int n, i;
	int a[100];
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> a[i];
	}

	for (i = n - 1; i >= 0; i--){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}