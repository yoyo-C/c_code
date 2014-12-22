#include <iostream>
using namespace std;
#include <iomanip>
int main(){
	int n;
	cin >> n;
	double a[100];
	for (int j = 0; j < n; j++){
		cin >> a[j];
	}
	double quotion[100];
	for (int k = 0; k < n - 1; k++){
		quotion[k] = a[k] / a[k + 1];
	}
	
	double maximun = 0;
	int maxnum;
	for (int h = 0; h < n - 1; h++){
		if (quotion[h] > maximun){
			maximun = quotion[h];
			maxnum = h;
		}
	}
	double max1, max2;
	max1 = a[maxnum];
	max2 = a[maxnum + 1];
	
	cout << fixed << setprecision(6) << max1 << " / ";
	cout << fixed << setprecision(6) << max2 << " = ";
	cout << fixed << setprecision(6) << maximun << endl;
	return 0;
}