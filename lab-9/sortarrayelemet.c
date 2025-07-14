#include<stdio.h>
#include<stdlib.h>

void main(){

    int n,i,temp;

    printf("enter number of element = ");
    scanf("%d",&n);

    int *arr = (int *)malloc(sizeof(int)*n);

    for(i=0;i<n;i++){
        printf("enter element = ");
        scanf("%d",(arr+(i*sizeof(int))));
    }

    for(i=0;i<n;i++){
        for(int j=i;j<n;j++){

            if(*(arr+(i*sizeof(int))) > *(arr+j) ){
                temp = *(arr+(i*sizeof(int)));
                *(arr+(i*sizeof(int)))=*(arr+j);
                *(arr+j)=temp;
            } 
        }
    }

    for(i=0;i<n;i++){
        printf("%d,",*(arr+(i*sizeof(int))));
    }
    
   free(arr);
}