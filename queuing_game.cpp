#include <iostream>
#include <string.h>
using namespace std;

int go(char str[], int start, int len, char boy){
	for (int i = start + 1; i < len; i++){
		if (str[i] == boy){
			i += go(str, i, len, boy);
		}
		else{
			cout << start << ' ' << i << endl;
			return i - start;
		}
	}
	cout << "error" << endl;
}
int main(){
	char str[101];
	cin >> str;
	go(str, 0, strlen(str), str[0]);
	return 0;
}
