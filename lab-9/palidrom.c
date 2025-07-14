#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){

    char *arr = (char *)malloc(sizeof(char)*10);
    char *temp = (char *)malloc(sizeof(char)*10);

    int i;

    printf("enter string = ");
    scanf("%s",arr);

    strcpy(temp,arr);
    strrev(temp);

    if(strcmp(arr,temp)==0){
        printf("given string is Palindrome");
    }
    else printf("given string is not Palindrome"); 

    free(arr);
    free(temp);
}