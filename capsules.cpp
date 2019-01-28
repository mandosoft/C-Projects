#include <iostream>
#include <cmath>
#include <tgmath.h>
#include <stdio.h>

using namespace std;

int main() {

int cases;
cin >> cases;
float length, diam, area, radius;
float area1, area2;

for (int i = 0; i<cases;i++) {
cin >> diam >> length;
radius = diam/2;
float pi = 3.14159265358979;
area = ((length - diam)*diam*pi + 4*pi*radius*radius)/100;

printf("%#.7f\n", area);

}

}