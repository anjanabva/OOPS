#include "matrices2.h"
#include <iostream>

using namespace std;

int main(){
int a;

MATRIX obj;

cout<<"choose the operation to be performed :\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - transpose\n5 - determinant\n6 - inverse"<<endl;
cin>>a;

switch(a){

case 1:
obj.matadd();
break;

case 2:
obj.matsub();
break;

case 3:
obj.matmul();
break;

case 4:
obj.mattra();
break;

case 5:
obj.matdet();
break;

case 6:
obj.matinv();
break;
}
return 0;
}
