#include<stdio.h>
void main(){
	int m,n,i,sum=0;
	printf("Enter a m: ");
	scanf("%d",&m);
	
	printf("Enter a n: ");
	scanf("%d",&n);
	
	
	for(i=m;i<=n;i++){
		sum+=i;
		
	}
	
	printf("sum for m to n: %d",sum);
}
