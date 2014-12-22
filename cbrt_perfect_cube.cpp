#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;

	for (int a = 5; a <= n; a++){
		int sum_a = a * a * a;
		for (int d = 2; (d < a - 2); d++){
			int sum_d = d * d * d;
			for (int c = d + 1; (c < a - 1); c++){
				int sum_c = c * c * c;
				int sum_b = sum_a - sum_d - sum_c;
				int b = cbrt(sum_b);
				if ((sum_b == (b * b * b)) && (b < a) && (b > c)){
					cout << "Cube = " << a << ", Triple = (" << d << "," << c << "," << b << ")" << endl;
				}
			}
		}
	}
	return 0;
}