#include <stdio.h>
#include "NumClass.h"



int main (){
int n , y , min , max;
printf("enter 2 positive integers: ");
scanf("%d",&n);
scanf("%d", &y);
if (n>y) {
min = y;
max = n;
}else{
min = n;
max = y;
}

int temp_min = min;

	printf("The Armstrong numbers are: ");
	while(temp_min<=max){
	if(isArmstrong(temp_min)) {
	printf("%d " , temp_min);
	}
	temp_min++;
	}
	
	printf("\nThe Palindromes are: ");
	temp_min = min;
	while(temp_min<=max){
	if(isPalindrome(temp_min)) {
	printf("%d " , temp_min);
	}
	temp_min++;
	}
	
	printf("\nThe Prime numbers are: ");
	temp_min = min;
	while(temp_min<=max){
	if(isPrime(temp_min)) {
	printf("%d " , temp_min);
	}
	temp_min++;
	}
	
	printf("\nThe Strong numbers are: ");
	temp_min = min;
	while(temp_min<=max){
	if(isStrong(temp_min)) {
	printf("%d ", temp_min);
	}
	temp_min++;
	}
	printf("\n");
}
