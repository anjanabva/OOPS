#include <iostream>
#include "numberpack.h"
int NUMBER :: sumsqr(int n){
if(n==0 || n==1){
return n;
}
else{
return sumsqr(n-1) + (n*n);
}
}
