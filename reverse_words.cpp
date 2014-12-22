#include<iostream>
#include<cstring>
using namespace std;
#define MAXLEN 500

int go(char word[]){
	if (word[0] == 0 || word[0] == ' '){
		return 0;
	}
	int ret = go(word + 1);
	cout << word[0];
	return ret + 1;
}

int main(){
	char word[MAXLEN];
	cin.getline(word, MAXLEN);
	int len = strlen(word);
	for (int i = 0; i < len; i++){
		i += go(word + i);
		cout << ' ';
	}
	return 0;
}
