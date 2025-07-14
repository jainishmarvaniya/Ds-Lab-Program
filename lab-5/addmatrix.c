#include<stdio.h>
void main(){
	int i,j;
	int a[2][2], b[2][2];
	int sum[2][2];
	
	for(i=0;i<2;i++){
		for( j=0;j<2;j++){
			printf("Enter a array element of array 1: ");
			scanf("%d",&a[i][j]);
		}
	}
	
	for( i=0;i<2;i++){
		for( j=0;j<2;j++){
			printf("Enter a array element of array 2: ");
			scanf("%d",&b[i][j]);
		}
	}
	
	for( i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j]=a[i][j]+b[i][j];
			printf("sum of two matrix is: %d",sum[i][j]);
		}
		printf("\n");
	}
	

	
	
}
