#include <iostream>
using namespace std;

int main(){
	int length, sum;
	int a[1000];
	cin >> length >> sum;
	int i, j;
	for (i = 0; i < length; i++){
		cin >> a[i];
	}
	for (i = 0; i < length; i++){
		for (j = i + 1; j < length; j++){
			if (a[i] + a[j] == sum){
				cout << "yes" << endl;
				return 0;
			}
		}
	}
	cout << "no" << endl;
	return 0;
}