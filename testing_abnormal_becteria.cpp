#include <iostream>
using namespace std;
int main(){
	int N;
	cin >> N;
	int a[100][100];
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cin >> a[i][j];
		}
	}

	int sum = 0;
	for (int i = 1; i < N - 1; i++){
		for (int j = 1; j < N - 1; j++){
			if ((a[i][j - 1] - a[i][j]) >= 50 && (a[i][j + 1] - a[i][j]) >= 50 && (a[i - 1][j] - a[i][j]) >= 50 && (a[i + 1][j] - a[i][j]) >= 50){
				sum += 1;
			}
		}
	}
	cout << sum << endl;
	return 0;
}