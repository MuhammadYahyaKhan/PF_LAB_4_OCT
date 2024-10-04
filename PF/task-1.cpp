#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of n");
	scanf("%d",&n);
	int fact = 1;
	if(n < 0){
		printf("Invalid input - Number should be a positive number or zero");
	}
	else{
		for(int i = 1; i <= n;i++){
			fact = fact * i;
	}
	printf("Factorial of %d is %d",n,fact);
	}
	
	return 0;
}