#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    printf("enter the num of integers");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("enter an integer");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++){
        printf("%d\n",*(ptr+i));

    }
    return 0;



}
