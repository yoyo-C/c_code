#include <iostream>
using namespace std;

int main(){
	int num, i;
	cin >> num;
	for (i = 10; i <= num; i++){
		int sum = i % 10 + i / 10;
		if (i % sum == 0){
			cout << i << "\n";
		}
	}
	return 0;
}