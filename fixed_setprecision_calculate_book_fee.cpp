# include <iostream>
using namespace std;
# include <iomanip>
int main(){
	double priceOfBook[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
	double sumOfBook[100][10];
	double sum[100] = {0};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 10; j++){
			cin >> sumOfBook[i][j];
			sum[i] += (priceOfBook[j] * sumOfBook[i][j]);
		}
	}
	for (int k = 0; k < n; k++){
		cout << fixed << setprecision(2) << sum[k] << endl;
	}
	return 0;
}