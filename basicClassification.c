#include <stdio.h>


int isPrime(int n) {
  int i, flag = 0;
  if(n<2) {
  return 0;
  }
  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  if( flag == 1 ){
  return 0;
  }
  return 1;
}



int isStrong(int num){
int i,fact,r,sum=0,temp;
 temp=num;
 while(num)
 {
     i=1,fact=1;
     r=num%10;
     while(i<=r)
     {
        fact=fact*i;
        i++;
     } 
     sum=sum+fact; 
     num=num/10; 
}
 if(sum==temp)
  return 1;
 else
  return 0;
}

