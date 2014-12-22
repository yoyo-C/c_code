#include <iostream>
using namespace std;

int main(){
	int day, total;
	int goldMedal, silverMedal, bronzeMedal;
	int sumGold = 0, sumSilver = 0, sumBronze = 0;
	cin >> day;
	int i, g, s, b;
	for (i = 0; i < day; i++){
		cin >> goldMedal >> silverMedal >> bronzeMedal;
		sumGold += goldMedal;
		sumSilver += silverMedal;
		sumBronze += bronzeMedal;
	}
	total = sumBronze + sumGold + sumSilver;
	cout << sumGold << " " << sumSilver << " " << sumBronze << " " << total;
	return 0;
}