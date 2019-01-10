#include <iostream>
#include <string>
using namespace std; 

int main(){

    int i; 
    std::string s; 
    int k, j, m; 
    cin >> i; 
    cin >> s >> k >> j >> m;

    if (k >= 2010/01/01){
      cout << "eligible\n";
    }
    else if (j < 1991/01/01){
      cout << "ineligible\n"; 
    }
    else if (m >= 5){
      cout <<  + "ineligible\n"; 
    }
    return 0;  
} 


