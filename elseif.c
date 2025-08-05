#include<stdio.h>
int main(){
    int age;
    printf("enter you age\n");

    scanf("%d",&age);
    printf("you have entered %d as your age\n" , age);
     if(age>=18){
        printf("you can vote");

     }
     else if(age>=12){
        printf("you can vote for kids");
     }

     else{
        printf("you can not vote");

     }

}