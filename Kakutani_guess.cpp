#include<iostream>
#include<cstring>
using namespace std;


void go(int input_num){
	if (input_num == 2){
		cout << "2/2=1" << '\n' << "End" << endl;
		return;
	}
	else if (input_num == 1){
		cout << "End" << endl;
		return;
	}
	if (input_num % 2 != 0){
		int total;
		total = input_num * 3 + 1;
		cout << input_num << "*3+1=" << total << endl;
		go(total);
	}
	else{
		int total;
		total = input_num / 2;
		cout << input_num << "/2=" << total << endl;
		go(total);
	}
}

int main(){
	int input_num;
	cin >> input_num;
	go(input_num);
	return 0;
}
