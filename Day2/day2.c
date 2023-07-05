#include<stdio.h>
bool isPalindrome(int x){
  long int remainder,reverse=0,n;
  n=x;
  if(x<0){
    return false;
  }
  if(x==0){
    return true;
  }

   while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
if(reverse==x){
  return true;
}else{
  return false;
}
}

