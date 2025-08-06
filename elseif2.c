#include<stdio.h>
int main(){
     int subject;
     printf("enter 1 if you pass in science\n", subject);
     
     printf("enter 2 if you pass in math\n", subject);
     
     printf("enter 3 if you passed in math and science both\n", subject);
     

     scanf("%d",&subject);

     if(subject==1){
      printf("yor reward is 15");

     }
     else if(subject==2){
      printf("yor reward is 15");

     }
     else if (subject==3){
      printf("your reward is 45");

     }
     
     
}