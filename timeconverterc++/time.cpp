#include <iostream>
#include "time.h"
#include <string.h>
using namespace std;

Time :: Time(){
int hour =0,min=0,sec=0;
}

Time :: Time(int a, int b, int c){
if(a<24 && a>=0){
hour = a;
}
else{
cout<<"Invalid time.."<<endl;
}
if(b<60 && b>=0){
min = b;
}
else{
cout<<"Invalid time.."<<endl;
}
if(c<60 && c>=0){
sec = c;
}
else{
cout<<"Invalid time.."<<endl;
}
}

void Time :: convert(){
int h;
string s;
if(hour<12){
h=hour;
s="AM";
}
else{
h=hour-12;
s="PM";
}
cout<<"The entered time in 12 - hour format is\n"<<h<<":"<<min<<":"<<sec<<" "<<s<<endl;
}

