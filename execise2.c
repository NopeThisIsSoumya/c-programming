#include<stdio.h>

int main()
{
 
    int num;
    float km,inch,lb,cm;
    printf("enter 1 if you want to convert km to miles\n");
    printf("enter 2 if you want to convert inches to foot\n");
    printf("enter 3 if you want to convert lb to kg\n");
    printf("enter 4 if you want to convert cm to inches\n");
    printf("enter 5 if you want to convert inches to meters\n");
    scanf("%d",&num);
   


    switch(num){
        case 1:
        printf("enter the value in km\n");
        scanf("%f",&km);
        printf("%f km=%f miles\n",km,km*0.621);
        break;

        case 2:
        printf("enter the value in inch\n");
        scanf("%f",&inch);
        printf("%f inch=%f foot\n",inch,inch*0.0833);
        break;

        case 3:
        printf("enter the value in lb\n");
        scanf("%f",&lb);
        printf("%f lb=%f kg\n",lb,lb*0.454);
        break;

        case 4:
        printf("enter the value in cm\n");
        scanf("%f",&cm);
        printf("%f cm=%f inches\n",cm,cm*0.394);
        break;

        case 5:
        printf("enter the value in inch\n");
        scanf("%f",&inch);
        printf("%f inch=%f meters\n",inch,inch*0.0254);
        break;

        default:
        printf("you entered wrong number");

    }
    return 0;

}