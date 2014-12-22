// Homework for week 13

#include<iostream>
#include<string>
using namespace std;
char match(char data){
	if (data == 'A'){
		return 'T';
	}
	else if (data == 'T'){
		return 'A';
	}
	else if (data == 'G'){
		return 'C';
	}
	else {
		return 'G';
	}
}
int main(){
	int num_of_lines;
	cin >> num_of_lines;
	char tmp[255];
	for (int i = 0; i < num_of_lines; i++){
		cin >> tmp;
		int count = 0;
		while (tmp[count] != '\0'){
			tmp[count] = match(tmp[count]);
			count++;
		}
		cout << tmp << endl;
	}
	return 0;
}
