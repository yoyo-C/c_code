# include <iostream>
using namespace std;
int main(){
	/*in room(n * n)*/
	/*'.' = room with healthy people*/
	/*'#' = empty room will not contaminate virus*/
	/*'@* = room with people get virus will infect its neighbours(up, down, right, left)*/
	/*m = calculate the infected number after m days*/
	int room[100][100];
	int n, m, num = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			char tmp;
			cin >> tmp;
			switch (tmp){
			case '.': room[i][j] = 0; break;
			case '#': room[i][j] = -1; break;
			case '@': room[i][j] = ++num; break;
			}
		}
	}
	cin >> m;
	int num1;
	num1 = num;
	for (; m > 1; m--){
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if ((room[i][j]) > 0 && (room[i][j]) <= num){
					if ((i - 1 >= 0) && (room[i-1][j] == 0)){
						room[i - 1][j] = ++num1;
					}
					if ((j - 1 >= 0) && (room[i][j - 1] == 0)){
						room[i][j - 1] = ++num1;
					}
					if ((j + 1 < n) && (room[i][j + 1] == 0)){
						room[i][j + 1] = ++num1;
					}
					if ((i + 1 < n) && (room[i + 1][j] == 0)){
						room[i + 1][j] = ++num1;
					}
				}
			}
		}
		num = num1;
	}
	cout << num << endl;
	return 0;
}