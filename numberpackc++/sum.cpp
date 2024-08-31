#include <iostream>
#include "numberpack.h"
int NUMBER :: sum(int n){
if(n==0 || n==1){
return n;
}
else{
return sum(n-1) + n;
}
}
