#include <iostream>
using namespace std;
int main()
{ // �������
	int m, n, i, sumOdd = 0; 
	cin >> m >> n; // ����m��n,���� 0<=m <= n <= 300
	for (i = m; i <= n; i++)
		if (i % 2 != 0)
			sumOdd += i; // iΪ����ʱ�ӵ�sumOdd
	cout << sumOdd << endl;
	return 0;
}