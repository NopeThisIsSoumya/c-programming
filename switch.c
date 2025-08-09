#include<stdio.h>
int main (){
    int age, marks;
    printf("enter your age\n ");
    scanf("%d",&age);

    printf("enter your marks\n ");
    scanf("%d",&marks);

    switch(age)
    {
        case 18:
        printf("your age is 18\n");
        switch(marks){
            case 45:
            printf("your marks are 45\n");
            break;

            default:
            printf("your marks are not 45\n");
        }
            break;

        case 25:
        printf("your age is 25\n");
        switch(marks){
            case 50 :
            printf("your marks are 50\n");
            break;
            
            default:
            ("your marks are not 50");
        }
        break;
        
        case 30:
        printf("your age is 30\n");
        break;

        default:
        printf("yor age is not 18,25,30");


    }
}