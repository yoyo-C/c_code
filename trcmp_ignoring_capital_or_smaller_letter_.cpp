#include <iostream>
using namespace std;
#include <string>
int main(){
	char s1[80], s2[80];
	cin.getline(s1, 80);
	cin.getline(s2, 80);
	int i = 0;
	char c1 = tolower(s1[0]), c2 = tolower(s2[0]);
	while (s1[i] != 0 && (c1 == c2)){
		i++;
		c1 = tolower(s1[i]);
		c2 = tolower(s2[i]);
	}
	if (c1 > c2){
		cout << '>' << endl;
	}
	else if (c1 < c2){
		cout << '<' << endl;
	}
	else {
		cout << '=' << endl;
	}
	return 0;
}