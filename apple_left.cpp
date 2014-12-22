#include <iostream>
using namespace std;
int main(){
	int n, x, y; // n is the number of apples, x is hours used by worm to eat an apple
	int appleLeft;

	// input
	cin >> n >> x >> y;

	//count the apple left good
	if ((y / x) >= n){
		appleLeft = 0;
	}else if (y % x == 0){
		appleLeft = n - y / x;
	}
	else{
		appleLeft = n - y / x - 1;
	}

	// output
	cout << appleLeft << endl;
	return 0;
}