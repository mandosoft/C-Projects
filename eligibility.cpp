#include <iostream>
#include <string>

using namespace std;

/* x is sweet honey and y is sour */

int main(){
     int x,y; 
     while (std::cin>>x>>y){
            
            if (x==13 || y==13){
                cout << "Never speak again.\n";
            }
            
            else if (x>y){
                cout << "To the convention.\n";
            }

            else if (x<y){
                cout << "Left beehind.\n"; 
            }

            else if (x==y){
                cout << "undecided.\n";
            }

     }
    return 0;

}