#include <iostream>
using namespace std;
int main()
{
	int n, a[1000]; // 一共n个数， n不超过1000。a用来保存这些数。
	int i = 0, j = 0; // 循环变量
	cin >> n;
	// 输入n个数
	for (i = 0; i < n; i++)
		cin >> a[i];
	//冒泡，不断比较相邻的两个数，如果顺序错了，就交换
	for (i = 0; i < n - 1; i++)
		for (j = 1; j < n - i; j++){
		if (a[j - 1] > a[j]){
			int temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
		}
		}
	// 依次输出
	for (i = 0; i < n; i++){
		cout << a[i] << endl;
	}
	return 0;
}