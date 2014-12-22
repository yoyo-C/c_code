#include <iostream>
using namespace std;
int main(){
	int maxOdd = 1, minEven = 98;// record the smallest odd and the smallest even

	//get 6 number and judge the largest odd and smallest even
	for (int i = 0; i < 6; i++){
		int tmp;
		cin >> tmp;
		if (tmp % 2 == 0){
			if (tmp < minEven){
				minEven = tmp;
			}
		}
		else{
			if (tmp > maxOdd){
				maxOdd = tmp;
			}
		}
	}

	if (minEven >= maxOdd)
		cout << minEven - maxOdd << endl;
	else
		cout << maxOdd - minEven << endl;

	return 0;
}