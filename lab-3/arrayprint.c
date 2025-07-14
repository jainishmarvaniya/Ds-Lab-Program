#include<stdio.h>
void main(){
	int size;
	int i;
	printf("Enter a array of size: ");
	scanf("%d",&size);
	
	int a[size];
	
	for(i=0;i<size;i++){
		printf("Enter a array element: ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++){
		printf("array element print %d",a[i]);
		printf("\n");
	}
}
