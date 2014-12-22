#include <iostream>
using namespace std;

int main(){
	int n, i, distance;
	float walk_time, bike_time;
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> distance;
		walk_time = distance / 1.2f;
		bike_time = 27 + 23 + distance / 3.0f;
		if (walk_time < bike_time){
			cout << "Walk\n";
		}
		else if (walk_time > bike_time){
			cout << "Bike\n";
		}
		else {
			cout << "All\n";
		}
	}
	cout << endl;
	return 0;
}