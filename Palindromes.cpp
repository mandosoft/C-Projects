#include <iostream>
#include <string>

using namespace std;

int main() {
string x,y;
int cases;
cin>>cases; 

for (int i=0; i<cases; i++){
    cin>>x;
    for(int j=1; j<=x.length(); j++){
        for(int k=0;k<x.length()-j+1;k++){
            y=x.substr(k,j);
            cout<<y<<endl;
        }
    }
} 

    
}