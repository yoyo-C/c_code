#include <iostream>
#include <iomanip>
using namespace std;
void ranked_room(int *proom, float *pseverity, int count){
	if (count == 0){
		cout << "None." << endl;
	}
	else if (count == 1){
		cout.fill('0');
		cout.width(3);
		cout << fixed << setprecision(0) << *proom << ' ';
		cout << fixed << setprecision(1) << *pseverity << endl;
	}
	else{
		for (int i = 0; i < count - 1; i++, pseverity++, proom++){
			for (int j = i + 1; j < count; j++){
				if (*pseverity < *(pseverity + j)){
					float temp_severity;
					int temp_room;
					temp_severity = *pseverity;
					temp_room = *proom;
					*pseverity = *(pseverity + j);
					*proom = *(proom + j);
					*(pseverity + j) = temp_severity;
					*(proom + j) = temp_room;
				}
			}
		}
		pseverity -= (count - 1);
		proom -= (count - 1);
		for (int k = 0; k < count; k++){
			cout.fill('0');
			cout.width(3);
			cout << fixed << setprecision(0) << *proom++ << ' ';
			cout << fixed << setprecision(1) << *pseverity++ << endl;
		}
	}
	return;
}

int main(){
	int num, room[50], count = 0;
	float min_severity, severity[50];
	int *proom = room;
	float *pseverity = severity;
	
	cin >> num >> min_severity;
	for (int i = 0; i < num; i++){
		int temp_room;
		float temp_severity;
		cin >> temp_room >> temp_severity;
		if (temp_severity > min_severity){
			*proom = temp_room;
			*pseverity = temp_severity;
			count++;
			proom++;
			pseverity++;
		}
	}
	ranked_room((proom - count), (pseverity - count), count);
	return 0;
}
