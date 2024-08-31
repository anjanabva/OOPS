#include <iostream>
#include "numberpack.h"
int NUMBER :: sumcube(int n){
if(n==0 || n==1){
return n;
}
else{
return sumcube(n-1) + (n*n*n);
}
}
