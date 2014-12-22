#include <iostream>
using namespace std;
#include <cstring>
int main(){
	char lngstw[100];
	char C;
	int length = 0;
	char tmp[100];
	int i = 0;
	while (C = cin.get()){
		if (C == '.'){
			tmp[i] = '\0';
			if (strlen(tmp) > length){
				length = strlen(tmp);
				strcpy(lngstw, tmp);
			}
			break;
		}
		if (C == ' '){
			tmp[i] = '\0';
			if (strlen(tmp) > length){
				length = strlen(tmp);
				strcpy(lngstw, tmp);
			}
			i = 0;
			continue;
		}
		tmp[i] = C;
		i++;
	}
	cout << lngstw << endl;
	return 0;
}