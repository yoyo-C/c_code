# include <iostream>
using namespace std;
# include <iomanip>
int main(){
	double hour;
	cin >> hour;
	if (hour <= 3){
		cout << 5 << endl;
	}
	else {
		cout << fixed << setprecision(2) << (5 + (hour - 3) * 2) << endl;
	}
	return 0;
}