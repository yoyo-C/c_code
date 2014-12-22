#include <iostream>
using namespace std;

int main(){
	int a, n;
	int i = 0, sum = 0;
	cin >> a;
	while (i < 5){
		cin >> n;
		if (a > n){
			sum += n;
		}
		i++;
	}
	cout << sum << endl;
	return 0;
}