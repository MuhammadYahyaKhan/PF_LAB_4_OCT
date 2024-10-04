#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	
	if(n > 0 or n == 1){
	
	while(n > 1){
		if(n%2 == 0){
			printf("%d\n",n);
		}
		n = n - 1;
	}	

	
	}
	else{
		printf("Invalid Input");
	}
	
	return 0;
}