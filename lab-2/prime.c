#include<stdio.h>
void main(){
	int n,i=1,count=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	while(i<=n){
	  if(n%i==0){
	  	count++;
	  }	
	  i++;
	}
	
	if(count==2){
		printf("%d is prime number",n);
	}
	else{
		printf("%d is not prime number",n);
	}
}
