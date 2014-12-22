#include <iostream>
using namespace std;
#include <iomanip>
int main(){
	int a[5][5];
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			cin >> a[i][j];
		}
	}
	int n, m;
	cin >> n >> m;
	if (n < 5 && m < 5){
		int tmp;
		for (int i = 0; i < 5; i++){
			if (i == n){
				tmp = m;
			}
			else if (i == m){
				tmp = n;
			}
			else {
				tmp = i;
			}
			for (int j = 0; j < 5; j++){
				if (j == 0){
					cout << a[tmp][j];
				}
				else{
					cout << setw(4) << a[tmp][j];
				}
			}
			if (i == 4){
				break;
			}
			cout << endl;
		}

	}
	else{
		cout << "error" << endl;
	}
	return 0;
}