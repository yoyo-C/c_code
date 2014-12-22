#include <iostream>
using namespace std;
int main(){
	double h, r, v; // h, r, v is the height, semidiameter, volumn of the bucket
	double
		PAI = 3.14159;
	int n, total = 20000;
	int THRES = 0.00001;
	// input
	cin >> h >> r;
	v = PAI * h * (r * r);
	
	n = total / v;
	if (n * v < total + THRES && n * v > total - THRES ){
		cout << n << endl;
	}
	else {
		cout << n + 1 << endl;
	}
	return 0;
}