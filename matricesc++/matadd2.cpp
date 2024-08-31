#include <iostream>
#include "matrices2.h"
using namespace std;

void MATRIX :: matadd()
{
cout<<"Enter number of rows in both matrices to be added:"<<endl;
cin>>r;
cout<<"Enter number of columns in both matrices to be added:"<<endl;
cin>>c;

int a[r][c];
cout<<"Enter values of first matrix:"<<endl;
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
cout<<"Enter value in position ("<<i<<","<<j<<")";
cin>>a[i][j];
}
}
int b[r][c];
cout<<"Enter values of second matrix:"<<endl;
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
cout<<"Enter value in position ("<<i<<","<<j<<")";
cin>>b[i][j];
}
}

int res[r][c];
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
res[i][j] = a[i][j] + b[i][j];
}
}
cout<<"Resultant matrix is :"<<endl;
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
cout<<res[i][j]<<"  ";
}
cout<<endl;
}
}

