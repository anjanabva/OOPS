#include <iostream>
#include "matrices2.h"

using namespace std; 

int deter(int a[10][10], int n) {
int det = 0;
if (n == 1) {
return a[0][0];
} else if (n == 2) {
return a[0][0] * a[1][1] - a[0][1] * a[1][0];
} else {
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

det += sign * a[0][x] * deter(submat, n - 1);
sign = -sign;
}
}
return det;
}

void cofactor(int a[10][10], int temp[10][10], int p, int q, int n) {
int i = 0, j = 0;
for (int row = 0; row < n; row++) {
for (int col = 0; col < n; col++) {
if (row != p && col != q) {
temp[i][j++] = a[row][col];
if (j == n - 1) {
j = 0;
i++;
}
}
}
}
}

void adjoint(int a[10][10], int adj[10][10], int n) {
if (n == 1) {
adj[0][0] = 1;
return;
}

int sign = 1, temp[10][10];

for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
cofactor(a, temp, i, j, n);
sign = ((i + j) % 2 == 0) ? 1 : -1;
adj[j][i] = sign * deter(temp, n - 1);
}
}
}

int inverse(int a[10][10], float inverse[10][10], int n) {
int det = deter(a, n);
if (det == 0) {
 cout<<"Determinant is zero. Inverse does not exist."<<endl;
return 0;
}

int adj[10][10];
adjoint(a, adj, n);

for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
inverse[i][j] = adj[i][j] / (float)det;
}
}

return 1;
}

void MATRIX :: matinv() {
cout<<"Enter number of rows or columns in square matrix:"<<endl;
cin>>n;

int a[10][10];
float inv[10][10];

cout<<"Enter values of the matrix:"<<endl;
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
cout<<"Enter value in position ("<<i<<","<<j<<")";
cin>>a[i][j];
}
}

if (inverse(a, inv, n)) {
cout<<"Inverse of the matrix is:"<<endl;
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
cout<<inv[i][j]<<"  ";
}
cout<<endl;
}
}
}



