#include <iostream>
using namespace std;

int main(){
	float N, K;
	while (cin >> N >> K){
		float P = 200.0;
		int i;
		float sum_N = N;
		for (i = 1; i <= 20; i++){
			if (sum_N - P >= 0){
				cout << i << endl;
				break;
			}
			else {
				sum_N += N;
				P += P * K / 100;
			}
		}
		if (i > 20){
			cout << "Impossible" << endl;
		}
	}
	return 0;
}