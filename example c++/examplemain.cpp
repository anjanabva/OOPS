#include <iostream>
#include "example.h"

using namespace std;

int main(){
int a=0;
EXAMPLE obj;
while(a!=3){
cout<<"Choose the operation to perform :\n1-Initialise data\n2-Increment data\n3-Exit"<<endl;
cin>>a;
switch(a){
case 1 :
obj.initialise();
break;
case 2 :
obj.increment();
break;
case 3 :
break;
}
}
return 0;
}
