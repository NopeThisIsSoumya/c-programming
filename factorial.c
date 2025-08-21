#include<stdio.h>

int factorial(int num)
{
    if (num==0||num==1)
    {
        return 1;

    }
    else{
        return(num*factorial(num-1));
    }
}
int main()
{
    int number;
     printf("enter the number you want factorial\n");
     scanf("%d",&number);
     printf("factorialof %d is %d\n" , number , factorial(number));

     return 0;
     

}