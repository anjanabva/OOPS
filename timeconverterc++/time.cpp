#include <iostream>
#include "time.h"
#include <string.h>
using namespace std;

Time :: Time(){
hour =0,min=0,sec=0;
}

Time :: Time(int a, int b, int c){
if(a<24 && a>=0){
hour = a;
}
else{
hour = -1;
}
if(b<60 && b>=0){
min = b;
}
else{
min = -1;
}
if(c<60 && c>=0){
sec = c;
}
else{
sec = -1;
}
}

void Time :: convert(){
if((hour!=-1 && min!=-1) && sec!=-1){
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
else{
cout<<"Invalid time. Output cannot be generated."<<endl;
}
}

