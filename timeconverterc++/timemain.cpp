#include <iostream>
#include "time.h"
#include <string.h>
using namespace std;

int main(){
int x,y,z;
cout<<"Enter hours :"<<endl;
cin>>x;
cout<<"Enter minutes :"<<endl;
cin>>y;
cout<<"Enter seconds :"<<endl;
cin>>z;
Time obj(x,y,z);
obj.convert();
return 0;
}

