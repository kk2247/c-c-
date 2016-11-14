#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num,i;
    int a=0,b=100;
    int guess[4];
    srand(time(0));
    num=rand()%100+1;
    printf("Let¡¯s begin! ");
    //printf("%d",num);
    for(i=0;i<=2;i++)
    {
        printf("What is the number?");
        scanf("%d",&guess[i]);
        if(guess[i]==num)
        {
            printf("Congratulations, you get the right number! You guess %d times.\n",i+1);
            goto loop;
        }
        else
        {
            if(guess[i]>num)
            {
                b=guess[i];
                printf("It¡¯s between %d~%d! ",a,b);
            }
            else
            {
                a=guess[i];
                printf("It¡¯s between %d~%d! ",a,b);
            }
        }
    }
    printf("\n");
    printf("I am so sorry that you can not guess the number.");
    loop:
    return 0;
}

