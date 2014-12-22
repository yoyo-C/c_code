#include <iostream>
using namespace std;
#include <iomanip>

int main(){
	int year, month, day;
	char temp;
	cin >> year >> temp >> month >> temp >> day;
	int leap_year;
	leap_year = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
	int pmonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int rmonth[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (leap_year == 1){
		if (day == rmonth[month - 1]){
			if (month == 12){
				year++;
				month = 1;
				day = 1;
			}
			else{
				month++;
				day = 1;
			}
		}
		else if (day < rmonth[month - 1]){
			day++;
		}
		else {
			cout << "invalid date" << endl;
			return 0;
		}
	}
	if (leap_year == 0){
		if (day == pmonth[month - 1]){
			if (month == 12){
				year++;
				month = 1;
				day = 1;
			}
			else{
				month++;
				day = 1;
			}
		}
		else if (day < pmonth[month - 1]){
			day++;
		}
		else {
			cout << "invalid date" << endl;
			return 0;
		}
	}
	cout << year << '-' << setfill('0') << setw(2) << month << '-' << setfill('0') << setw(2) << day;
	return 0;
}