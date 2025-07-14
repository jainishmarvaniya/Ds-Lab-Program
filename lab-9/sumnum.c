#include<stdio.h>
#include<stdlib.h>

void main(){
	int n,sum=0;
	printf("Enter a size of array: ");
	scanf("%d",&n);
	
     int *p= (int *) malloc(sizeof(int)*n);
     int i;
     
     for(i=0;i<n;i++){
     	printf("Enter a array element %d :",i+1);
     	scanf("%d",(p+(i*sizeof(int))));
	 }
	 
	 for(i=0;i<n;i++){
	 	sum+=*(p+(i*sizeof(int)));
	 }
	 
	 printf("sum is:  %d",sum);
	 free(p);
     
}
