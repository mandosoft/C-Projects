#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main() {

int cases,month,day;
cin >> cases;

int daysLeap[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
int daysReg[13]  = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int totalDaysLeap[13] = {0};
int totalDaysReg[13]  = {0};

for(int j=1 ; j<=13 ; j++) {
    totalDaysLeap[j] = totalDaysLeap[j-1] + daysLeap[j];
    totalDaysReg[j]  = totalDaysReg[j-1]  + daysReg[j];
}

for (int i = 0 ; i < cases ; i++) {
cin >> month >> day;
if( (day <= totalDaysLeap[month]) && day>= (totalDaysReg[month]-daysReg[month]+1) && month >=1 && month <=12 )
    cout << "legal" << endl;
else
    cout << "illegal" << endl;

}

}
