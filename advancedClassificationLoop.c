#include <stdio.h>



int isPalindrome(int n){
if(n<0) return 0;
int original = n;
int tempunit , reverse = 0;

	while (n){
	tempunit = n%10;
	reverse = reverse * 10 + tempunit;
	n = n/10;
	}
if (original == reverse) return 1;
return 0;
}



int isArmstrong(int n){
if(n<0) return 0;
int pow = 0 , sum = 0;
int original = n;
int tempunit;
int unitsum;
	//save num of digits at "pow"
	while(original){
	original = original/10;
	pow++;
	}
	//calculating the sum
	original = n;
	while (original){
	tempunit = original%10;
	unitsum = 1;
		//unit pow
		for(int i=0; i<pow; i++){
		unitsum = unitsum*tempunit;
		}
	//adding the unitsum to total sum
	sum = sum + unitsum;
	original = original/10;
	}
if (sum == n) return 1;
return 0;
}
