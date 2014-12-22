#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	for (int a = 5; a <= n; a++){
		for (int b = 2; b < a; b++){
			for (int c = b + 1; c < a; c++){
				for (int d = c + 1; d < a; d++){
					if (a * a * a == b * b * b + c * c * c + d * d * d){
						cout << "Cube = " << a << ", Triple = (" << d << "," << c << "," << b << ")" << endl;
					}
				}
			}
		}
	}
	return 0;
}