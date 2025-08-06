#include <stdio.h>
int main(){
    int sub;
    printf("enter 1 or 2 if you passed in any sub ");
    scanf("%d",&sub);
    printf("you have entered %d as you passed in any sub\n",sub);
    if(sub==1){
        printf("you passed in math or science\n");
        printf("your reward is $15");
    
    }
    else if(sub==2){
        printf("you passed in both sub\n");
        printf("your reward is $45");

    }
    else{
        printf("you failed .. better luck next time\n");
        printf("your reward is 0");

    }


}