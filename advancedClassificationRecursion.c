#include <stdio.h>	


int RecursiveArm(int x , int sum , int pow){
	if (x==0) {
		return sum;
	}
int unit = x%10;
int unitsum = 1;
	for(int i=0; i<pow; i++){
	unitsum = unitsum*unit;
	}
sum = sum+unitsum;
return RecursiveArm(x/10 , sum , pow);
}


int RecursivePal(int num){
int temp = num;
int digit = 0;

	while (temp){
	temp = temp/10;
	digit++;
	}
    
    if(num == 0)
        return 0;
    int pow = 1;    
    for(int i=1; i<digit; i++){
    pow = pow * 10;
    }

    return (num%10 * pow + RecursivePal(num/10));
}


int isPalindrome(int num){
if(num<0) return 0;
    if(num == RecursivePal(num))
    {
        return 1;
    }
    return 0;
}

	

int isArmstrong(int n){
if (n<0) return 0;
int temp = n;
int pow = 0;
// calculate num of digits
	while(temp){
	temp = temp/10;
	pow++;
	}
	
	if (RecursiveArm(n , 0 , pow) == n){
		return 1;
	}else{
	return 0;
	}	
}

