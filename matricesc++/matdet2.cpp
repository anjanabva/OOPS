#include <iostream>
#include "matrices2.h"

using namespace std; 

int determinant(int a[10][10],int n){
int det = 0;
if (n == 1){
return a[0][0];
}
else if (n == 2){
return a[0][0] * a[1][1] - a[0][1] * a[1][0];
} 
else {
int submat[10][10];
int sign = 1;
for (int x = 0; x < n; x++) {
int subi = 0;
for (int i = 1; i < n; i++) {
int subj = 0;
for (int j = 0; j < n; j++) {
if (j == x) {
continue;
}
submat[subi][subj] = a[i][j];
subj++;
}
subi++;
}
det += sign * a[0][x] * determinant(submat, n - 1);
sign = -sign;
}
}
return det;
}

void MATRIX :: matdet() {
cout<<"Enter number of rows or columns in square matrix:"<<endl;
cin>>n;

int a[10][10]; 
cout<<"Enter values of the matrix:"<<endl;
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
cout<<"Enter value in position ("<<i<<","<<j<<")";
cin>>a[i][j];
}
}
int det = determinant(a, n);
cout<<"Determinant of the matrix is: "<<det<<endl;
}

