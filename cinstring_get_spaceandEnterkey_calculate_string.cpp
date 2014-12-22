#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for (int a = 0; a < n; a++){
		char str[1001];
		char alph[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
		int alph_num[26] = { 0 };
		cin >> str;
		for (int b = 0; b < 1000; b++){
			if (str[b] == '\0'){
				break;
			}
			for (int c = 0; c < 26; c++){
				if (str[b] == alph[c]){
					alph_num[c]++;
					break;
				}
			}
		}
		int max_rate = 0;
		char max_char;
		for (int d = 0; d < 26; d++){
			if (alph_num[d] > max_rate){
				max_char = alph[d];
				max_rate = alph_num[d];
			}
			else if (alph_num[d] == max_rate){
				if (alph[d] < max_char){
					max_char = alph[d];
				}
			}
		}
		cout << max_char << " " << max_rate << endl;
	}
	return 0;
}
