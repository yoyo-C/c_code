#include <iostream>
using namespace std;

int main(){
	int set_of_num;
	cin >> set_of_num;

	int result[20] = { 0 };

	for (int i = 0; i < set_of_num; i++){
		int m, n, array[100][100];
		int(*p)[100];
		p = array;
		cin >> m >> n;
		for (int j = 0; j < m; j++){
			for (int k = 0; k < n; k++){
				cin >> p[j][k];
				if (j == 0 || j == m - 1 || k == 0 || k == n - 1){
					result[i] += p[j][k];
				}
			}
		}
	}

	for (int i = 0; i < set_of_num; i++){
		cout << result[i] << endl;
	}
	return 0;
}
