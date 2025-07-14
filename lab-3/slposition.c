#include<stdio.h>
void main(){
	int n;
	
	printf("Enter a array of size: ");
	scanf("%d",&n);
	
	int a[n],i;
	
	for( i=0;i<n;i++){
		printf("enter array element: ");
		scanf("%d",&a[i]);
	}
	
	int max=a[0],min=a[0],minindex=0,maxindex=0;
	
	for( i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
			maxindex=i;
		}
		
		if(a[i]<min){
			min=a[i];
			minindex=i;
		}
	}
	
	printf("smallest number and index:  %d %d",min,minindex);
	printf("\n");
	printf("largest number and index:  %d %d",max,maxindex);
}

