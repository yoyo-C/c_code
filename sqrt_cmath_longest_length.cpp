#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>
int main(){
	int n;
	cin >> n;
	double a[100][2];
	for (int i = 0; i < n; i++){
		cin >> a[i][0] >> a[i][1];
	}
	double maxperpoint[100] = { 0 };
	for (int i = 0; i < n - 1; i++){
		for (int j = i; j < n - 1; j++){
			double distance, x, y;
			x = (a[i][0] - a[j + 1][0]) * (a[i][0] - a[j + 1][0]);
			y = (a[i][1] - a[j + 1][1]) * (a[i][1] - a[j + 1][1]);
			distance = sqrt(x + y);
			if (distance > maxperpoint[i]){
				maxperpoint[i] = distance;
			}
		}
	}
	double maxDistance = 0;
	for (int k = 0; k < n - 1; k++){
		if (maxperpoint[k] > maxDistance){
			maxDistance = maxperpoint[k];
		}
	}
	cout << fixed << setprecision(4) << maxDistance << endl;
	return 0;
}