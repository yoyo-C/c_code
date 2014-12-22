#include <iostream>
using namespace std;

int main(){
	int num_100 = 0, num_50 = 0, num_20 = 0, num_10 = 0, num_5 = 0, num_1 = 0;
	int n, sum;
	cin >> sum;
	num_100 = sum / 100;
	sum -= num_100 * 100;
	num_50 = sum / 50;
	sum -= num_50 * 50;
	num_20 = sum / 20;
	sum -= num_20 * 20;
	num_10 = sum / 10;
	sum -= num_10 * 10;
	num_5 = sum / 5;
	sum -= num_5 * 5;
	num_1 = sum;
	cout << num_100 << endl;
	cout << num_50 << endl;
	cout << num_20 << endl;
	cout << num_10 << endl;
	cout << num_5 << endl;
	cout << num_1 << endl;
	return 0;
}