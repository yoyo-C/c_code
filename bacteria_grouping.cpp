#include <iostream>
using namespace std;

int main(){

	//i, j are loops variables
	int i, j;
	//n is the number of becteria
	int n;
	// id record the serial number of becteria¡¢rate record the reproduction of becteria£¬ id[i] corresponds to rate[i] 
	int id[100];
	double rate[100];

	cin >> n;
	for (i = 0; i < n; i++){
		//initial¡¢final stands for the finial and final number of becterias
		double initial, final;
		cin >> id[i] >> initial >> final;
		rate[i] = final / initial;
	}

	// sort the becteria incubator according to number
	for (i = 0; i < n - 1; i++){
		for (j = 0; j < n - i - 1; j++){
			if (rate[j + 1] > rate[j]){
				int tmp = id[j];
				id[j] = id[j + 1];
				id[j + 1] = tmp;
				double tmp2 = rate[j];
				rate[j] = rate[j + 1];
				rate[j + 1] = tmp2;
			}
		}
	}
	//record the biggest margin
	double max = 0;
	//num1 + 1 stand for the number of the first becteria incubator
	int num1 = 0;
	// find out the biggest gap in number between two neiboring becteria incubator
	for (i = 0; i < n - 1; i++)
		if (max < rate[i] - rate[i + 1]){
			max = rate[i] - rate[i + 1];
			num1 = i;
		}

	// print out these becteria incubators with largger reproduction
	cout << num1 + 1 << endl;
	for (i = num1; i >= 0; i--)
		cout << id[i] << endl;

	// print out these becteria incubators with smaller reproduction
	cout << n - num1 - 1 << endl;
	for (i = n - 1; i >= num1 + 1; i--)
		cout << id[i] << endl;

	return 0;
}