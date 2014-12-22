#include <iostream>
using namespace std;

int main(){
	int n, k, i, j;
	cin >> n >> k;
	int a[1000];
	for (i = 0; i < n; i++){
		cin >> a[i];
	}
	for (i = 0; i < n; i++){
		int count = 0;
		for (j = 0; j < n; j++){
			if (a[i] < a[j]){
				count++;
			}
		}
		if (count == k - 1){
			cout << a[i] << endl;
			return 0;
		}
	}
	return 0;

}