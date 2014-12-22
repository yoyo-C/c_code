#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int n;
	cin >> n;
	char words[200][40] = {'\0'};
	char (*p)[40];
	p = words;
	for (int i = 0; i < n; i++){
		cin >> p[i];
	}
	int len[200] = { 0 };
	int *q;
	q = len;
	for (int i = 0; i < n; i++){
		q[i] = strlen(p[i]);
	}
	int total = 0, start = 0;
	for (int i = 0; i < n;i++){
		total += (q[i] + 1);
		
		if (total > 81){
			cout << '\n';
			start = -1;
			total = 0;
			i--;
		}
		else{
			if (start == 0){
				cout << p[i];
			}
			else{
				cout << ' ' << p[i];
			}
		}
		start++;
	}
	return 0;
}
