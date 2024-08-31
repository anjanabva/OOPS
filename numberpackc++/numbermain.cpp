#include <iostream>
#include "numberpack.h"
using namespace std;
int main(){
int a;
cout<<"Enter the operation to be performed\n1 - Factorial\n2 - nth Fibbonacci value\n3 - Sum of n numbers\n4 - Sum of n squared numbers\n5 - Sum of n cubed numbers\n";
cin>>a;
int n;
cout<<"Enter the number : ";
cin>>n;
int result;
NUMBER OBJECT;
switch(a){
case 1:
result = OBJECT.fact(n);
break;
case 2:
result = OBJECT.fib(n);
break;
case 3:
result = OBJECT.sum(n);
break;
case 4:
result = OBJECT.sumsqr(n);
break;
case 5:
result = OBJECT.sumcube(n);
break;
}
cout<<"Result is : "<<result;
return 0;
}
