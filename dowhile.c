#include<stdio.h>
int main(){
    int num,i=0;
    printf("enter any number\n");
    scanf("%d",&num);

    do{
        printf("%d x %d = %d\n" ,num , i ,i*3);
        i=i+1;
        

    }while(i<=20);


}