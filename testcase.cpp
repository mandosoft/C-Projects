#include <iostream>
#include <string>

using namespace std;

/*

Input test data 

3
EligibleContestant 2013/09/01 1995/03/12 10
IneligibleContestant 2009/09/01 1990/12/12 50
PetitionContestant 2009/09/01 1990/12/12 35

*/ 


int main(){

    int i, k, j, m; 
    std::string s; 
    
    cin >> i >> s >> k >> j >> m;

    cout << s;  

    if (k >= 2010/01/01){
      cout << "eligible\n";
    }
    else if (j > 1991/01/01 || m >= 5 ){
      cout << "ineligible\n"; 
    }
    else {
      cout << "coach petitions\n";
    }

  return 0;  


} 


