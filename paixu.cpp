#include <iostream>
using namespace std;
int main(){
	// �������
	// allΪȫ��ʮ������odd��¼������even��¼ż����odd�� even����10��
	int all[10], odd[10], even[10];
	//i, jΪѭ������
	int i = 0, j = 0;
	// ��������ʮ������all�� iΪall���±�
	for (; i < 10; i++)
		cin >> all[i];

	//numOdd, numEven�ֱ�Ϊ��¼������ż���ĸ���
	int numOdd = 0;
	int numEven = 0;

	// ��������all�� �����ǰall[i]Ϊ���������odd[numOdd], ż������even[numEven]
	for (i = 0; i < 10; i++){
		if (all[i] % 2 != 0){ // ����
			odd[numOdd] = all[i];
			numOdd++;
		} else{ // ż��
			even[numEven] = all[i];
			numEven++;
		}
	}

	// ��oddð������
	for (i = 0; i < numOdd - 1; i++){
		for (j = 0; j < numOdd - i - 1; j++){
			if (odd[j] > odd[j + 1]){
				// tmpΪ��ʱ����
				int tmp = odd[j + 1];
				odd[j + 1] = odd[j];
				odd[j] = tmp;
			}
		}
	}
	// ��evenð��
	for (i = 0; i < numEven - 1; i++){
		for (j = 0; j < numEven - 1 - i; j++){
			if (even[j] > even[j + 1]){
				//tmpΪ��ʱ����
				int tmp = even[j];
				even[j] = even[j + 1];
				even[j + 1] = tmp;
			}
		}
	}
	// �������
	for (i = 0; i < numOdd; i++){
		cout << odd[i] << " ";
	}
	// ���ż��
	for (i = 0; i < numEven; i++){
		cout << even[i] << " ";
	}
	cout << endl;
	return 0;
}