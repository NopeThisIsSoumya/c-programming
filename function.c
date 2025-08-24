#include<stdio.h>
int sum(int a , int b)
{
    return a+b;

}
int main()
{
    int a , b , c;
    printf ("enter two number\n");
    scanf("%d %d",&a,&b);
     c = sum(a,b);
     printf("the sum is %d \n" , c);

     return 0;

}