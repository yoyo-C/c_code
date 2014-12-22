#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int num, i; // n is the number of patients
	float numA = 0, numB = 0, numC = 0, numD = 0; // numA, numB, numC, numD are the numbers of people aging 1-18, 19-35,36-60, 60-
	// calculate the numbers of people from different age groups
	cin >> num;
	for (i = 0; i < num; i++){
		int temp;
		cin >> temp;
		if (temp >= 1 && temp <= 18){
			numA++;
		}
		else if (temp <= 35){
			numB++;
		}
		else if (temp <= 60){
			numC++;
		}
		else{
			numD++;
		}
	}
	numA = numA / num * 100;
	numB = numB / num * 100;
	numC = numC / num * 100;
	numD = numD / num * 100;

	cout << "1-18: " << fixed << setprecision(2) << numA << '%' << endl;
	cout << "19-35: " << fixed << setprecision(2) << numB << '%' << endl;
	cout << "36-60: " << fixed << setprecision(2) << numC << '%' << endl;
	cout << "60-: " << fixed << setprecision(2) << numD << '%' << endl;
	return 0;

}