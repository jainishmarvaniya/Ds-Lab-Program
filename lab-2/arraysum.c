#include <stdio.h>
void main(){
    int size;

    printf("Enter a size: ");
    scanf("%d",&size);

    int a[size],i,j;

    for(int i=0;i<size;i++){
        printf("Enter a element for array 1: ");
        scanf("%d",&a[i]);
    }

    int b[size];

    for(int j=0;j<size;j++){
        printf("Enter a element for array 2: ");
        scanf("%d",&b[j]);
    }
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("array addition: %d",a[i]+b[j]);
             printf("\n");
        }
        
    }

}