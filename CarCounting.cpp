#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main() {

int cases;
cin >> cases;

string apple;

int R, G, B, Y, K, W, T = 0;
int count;

for (int i = 0; i<cases;i++) {

cin >> apple;
char grape[apple.length()] = {0};

for (int j = 0 ; j<apple.length() ; j++){
grape[j] = apple.at(j);
}
R = G = B = Y = K = W = T = 0;

if(apple.length()>1000)
    count = 1000;
    else
    {
        count = apple.length();
    }
    

for (int k = 0 ; k <count ; k++) {
    if (grape[k] ==  'R')
        R++;
    else if (grape[k] == 'G')
        G++;
    else if (grape[k] == 'B')
        B++;
    else if (grape[k] == 'Y')
        Y++;
    else if (grape[k] == 'K')
        K++;
    else if (grape[k] == 'W')
        W++;
    else if (grape[k] == 'T')
        T++;
}

cout << R << " " << G << " " <<B<< " "<<Y<< " " <<K<< " " <<W<< " " <<T << endl;

}

}