#include<stdio.h>
void main(){
	int a[3][2], b[2][3],c[3][3];
	int i,j,k;
		for(i=0;i<3;i++){
		for( j=0;j<2;j++){
			printf("Enter a array element of array 1 ind[%d %d]: ", i , j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for( i=0;i<2;i++){
		for( j=0;j<3;j++){
			printf("Enter a array element of array 2 ind[%d %d]:  ", i , j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		    c[i][j]=0;
			for(k=0;k<2;k++){
				c[i][j]+=a[i][k]*b[k][j];
			
			}
		}
			
	}
	
	for( i=0;i<3;i++){
		for( j=0;j<3;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	
	
}
