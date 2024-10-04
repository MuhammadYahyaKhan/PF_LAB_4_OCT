#include<stdio.h>
int main(){
	int sum = 0;
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	sum = sum + n;
	while(n != 0){
		printf("Enter the value of n\n");
		
		scanf("%d",&n);	
		sum = sum + n;
	}
	printf("The sum of all the values is %d", sum);
	return 0;
}