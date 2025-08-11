#include<stdio.h>
int main(){
     int i,j, num;
    for(i=0; i<5;i++)
    {
        printf("%d\n" , i);
         for(j=0; j<4;j++)
         {
            printf("enter any num, enter 0 if you want to exit \n");
            scanf("%d" , &num);
            if (num==0)
            {
                 goto end;

            }
           

        }
    }
    end:
    return 0;
}