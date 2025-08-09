#include<stdio.h>
int main(){

    int day;
    printf("enter day no\n");
    scanf("%d", &day);
    
    switch(day) 
    {
        case 1:
        printf("today is monday\n" );
        break;

        case 2:
        printf("today is tuesday\n");
        break;

        case 3:
        printf("today is wednesday\n");
        break;

        case 4:
        printf("today is thrusday\n");
        break;
        case 5:
        printf("today is friday\n");
        break;

        case 6:
        printf("today is saturday\n");
        break;

        case 7:
        printf("today is sunday\n");
        break;

        default:
        printf("you entered wrong day no");

    }

}