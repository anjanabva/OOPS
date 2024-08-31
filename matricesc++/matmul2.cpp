#include <iostream>
#include "matrices2.h"
using namespace std;

void MATRIX :: matmul()
{
cout<<"Enter number of rows in first matrix to be multiplied:"<<endl;
cin>>x;
cout<<"Enter number of columns in first matrix to be multiplied OR number of rows in second matrix to be multiplied:"<<endl;
cin>>y;
cout<<"Enter number of columns in second matrix to be multiplied:"<<endl;
cin>>z;

int a[x][y];
cout<<"Enter values of first matrix:"<<endl;
for(int i=0;i<x;i++){
for(int j=0;j<y;j++){
cout<<"Enter value in position ("<<i<<","<<j<<")";
cin>>a[i][j];
}
}
int b[y][z];
cout<<"Enter values of second matrix:"<<endl;
for(int i=0;i<y;i++){
for(int j=0;j<z;j++){
cout<<"Enter value in position ("<<i<<","<<j<<")";
cin>>b[i][j];
}
}

int c[x][z];
for(int i=0;i<x;i++){
for(int j=0;j<z;j++){
c[i][j]=0;
for(int k=0;k<y;k++){
c[i][j]= c[i][j] + (a[i][k]*b[k][j]);
}
}
}
cout<<"Resultant matrix is :"<<endl;
for(int i=0;i<x;i++){
for(int j=0;j<z;j++){
cout<<c[i][j]<<"  ";
}
cout<<endl;
}
}

