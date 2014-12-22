#include <iostream>
using namespace std;
#include <iomanip>

int main(){
	float sumPrice[3] = { 0.0 };
	float sumCategory[3] = { 0.0 };
	int n = 3;
	char category;
	while (n > 0){
		int i, num;
		cin >> i >> num;
		for (int j = 0; j < num; j++){
			float temp;
			cin >> category >> temp;
			sumPrice[i - 1] += temp;
			switch (category){
			case 'A': sumCategory[0] += temp; break;
			case 'B': sumCategory[1] += temp; break;
			case 'C': sumCategory[2] += temp; break;
			}
		}
		n--;
	}
	for (int j = 1; j < 4; j++){
		cout << j << " " << sumPrice[j-1] << endl;
	}
	cout << "A " << setprecision(2) << fixed << sumCategory[0] << endl;
	cout << "B " << sumCategory[1] << endl;
	cout << "C " << sumCategory[2] << endl;
	return 0;
}