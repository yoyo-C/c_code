#include <iostream>
#include <cstring>
using namespace std;

int peaks(int (*pi)[20],int (*ppk)[200], int m, int n){
	static int count = 0;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (i == 0){
				if (j == 0){
					if ((pi[i][j] >= pi[i][j + 1]) && (pi[i][j] >= pi[i + 1][j])){
						ppk[0][count] = i;
						ppk[1][count] = j;
						count++;
					}
				}
				else if (j == (n - 1)){
					if ((pi[i][j] >= pi[i][j - 1]) && (pi[i][j] >= pi[i + 1][j])){
						ppk[0][count] = i;
						ppk[1][count] = j;
						count++;
					}
				}
				else{
					if ((pi[i][j] >= pi[i][j - 1]) && (pi[i][j] >= pi[i + 1][j]) && (pi[i][j] >= pi[i][j + 1])){
						ppk[0][count] = i;
						ppk[1][count] = j;
						count++;
					}
				}
			}
			else if (i == (m - 1)){
				if (j == 0){
					if ((pi[i][j] >= pi[i][j + 1]) && (pi[i][j] >= pi[i - 1][j])){
						ppk[0][count] = i;
						ppk[1][count] = j;
						count++;
					}
				}
				else if (j == (n - 1)){
					if ((pi[i][j] >= pi[i][j - 1]) && (pi[i][j] >= pi[i - 1][j])){
						ppk[0][count] = i;
						ppk[1][count] = j;
						count++;
					}
				}
				else{
					if ((pi[i][j] >= pi[i][j - 1]) && (pi[i][j] >= pi[i - 1][j]) && (pi[i][j] >= pi[i][j + 1])){
						ppk[0][count] = i;
						ppk[1][count] = j;
						count++;
					}
				}
			}
			else if (j == 0){
				if ((pi[i][j] >= pi[i + 1][j]) && (pi[i][j] >= pi[i - 1][j]) && (pi[i][j] >= pi[i][j + 1])){
					ppk[0][count] = i;
					ppk[1][count] = j;
					count++;
				}
			}
			else if (j == (n - 1)){
				if ((pi[i][j] >= pi[i + 1][j]) && (pi[i][j] >= pi[i - 1][j]) && (pi[i][j] >= pi[i][j - 1])){
					ppk[0][count] = i;
					ppk[1][count] = j;
					count++;
				}
			}
			else{
				if ((pi[i][j] >= pi[i + 1][j]) && (pi[i][j] >= pi[i - 1][j]) && (pi[i][j] >= pi[i][j - 1]) && (pi[i][j] >= pi[i][j + 1])){
					ppk[0][count] = i;
					ppk[1][count] = j;
					count++;
				}
			}
		}
	}
	return count;
}

int main(){
	int m, n, array_input[20][20], array_peaks[2][200];
	int count;
	cin >> m >> n;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cin >> array_input[i][j];
		}
	}
	count = peaks(array_input,array_peaks, m, n);
	for (int i = 0; i < count; i++){
		cout << array_peaks[0][i] << ' ' << array_peaks[1][i] << endl;
	}
	return 0;
}