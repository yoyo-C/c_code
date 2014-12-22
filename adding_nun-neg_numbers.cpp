#include <iostream>
#include<cstring>
using namespace std;

// array str1、str2 accept two large integers and are transformed to arrays a1 、a2
char str1[201], str2[201];
int a1[200] = { 0 }, a2[201] = { 0 };

int main(){
	// i is a loop variable
	int i;
	// input
	cin >> str1 >> str2;
	// len1、len2 record the length of two arrays
	int len1 = strlen(str1);
	int len2 = strlen(str2);

	// transform the strings in str1、str2 to numbers and store them in a1、a2, each member of which store only one number
	// a1[0] is the low address while a1[len1 - 1] is the high address
	for (i = 0; i < len1; i++)
		a1[i] = str1[len1 - 1 - i] - '0';
	for (i = 0; i < len2; i++)
		a2[i] = str2[len2 - 1 - i] - '0';

	//adding from low address to high address and store into a2
	for (i = 0; i < 200; i++){
		a2[i] += a1[i];
		if (a2[i] >= 10){  //decide where should carryover
			a2[i] -= 10;
			a2[i + 1]++; // add the carry-over to a2
		}
	}
	//find the non-zero in the highest address
	for (i = 200; i >= 0; i--)
		if (a2[i] != 0)
			break;
	if (i == -1) // if the result is zero, which means all members in a2[i] are zero. so at president, i is -1.
		cout << 0;
	else
		for (; i >= 0; i--)
			cout << a2[i];
	cout << endl;

	return 0;
}