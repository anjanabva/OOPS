#include <iostream>
#include "matrices2.h"

using namespace std;

void MATRIX :: mattra() {
cout<<"Enter number of rows in matrix:"<<endl;
cin>>r;
cout<<"Enter number of columns in matrix:"<<endl;
cin>>c;

int a[r][c]; 
cout<<"Enter values of the matrix:"<<endl;
for (int i = 0; i < r; i++) {
for (int j = 0; j < c; j++) {
cout<<"Enter value in position ("<<i<<","<<j<<")";
cin>>a[i][j];
}
}
int b[c][r];
for (int i = 0; i < r; i++) {
for (int j = 0; j < c; j++) {
b[j][i]=a[i][j];
}
}
cout<<"Transpose of the entered matrix is:"<<endl;
for (int i = 0; i < c; i++) {
for (int j = 0; j < r; j++) {
cout<<b[i][j]<<"  ";
}
cout<<endl;
}
}

