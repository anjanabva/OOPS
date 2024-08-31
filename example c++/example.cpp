#include <iostream>
#include "example.h"

using namespace std;

void EXAMPLE :: initialise(){
cout<<"enter data : "<<endl;
cin>>data;
cout<<"Initial value of data is : "<<data<<endl;
}

void EXAMPLE :: increment(){
data = data + 1;
cout<<"Incremented value of data is : "<<data<<endl;
}
