#include <iostream>
using namespace std;
int main()
{ // 奇数求和
	int m, n, i, sumOdd = 0; 
	cin >> m >> n; // 输入m、n,其中 0<=m <= n <= 300
	for (i = m; i <= n; i++)
		if (i % 2 != 0)
			sumOdd += i; // i为奇数时加到sumOdd
	cout << sumOdd << endl;
	return 0;
}