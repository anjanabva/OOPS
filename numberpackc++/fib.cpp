#include <iostream>
#include "numberpack.h"
int NUMBER :: fib(int n){
if(n==1 || n==2){
return n-1;
}
else{
return fib(n-1) + fib(n-2);
}
}
