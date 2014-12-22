#include <iostream>
using namespace std;
int main(){
	int n, i, j, tmp = 0;
	cin >> n; // record the number of students

	// chose the height score
	for (i = 0; i < n; i++){
		cin >> j;
		if (j > tmp){
			tmp = j;
		}
	}
	cout << tmp << endl;

	return 0;
}