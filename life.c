#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char name[20];
int year,month,day;
int money;
int warehouse=500;
int energy;
//人生游戏初始化设定。
//购买彩票
int sweet_stakes()
{
    int sweet_num[20];
    int num[20];
    int b,c,d,e;
    char answer;
    int gain=0;
    printf("every sweet stake is $5");
    printf("please input your seven number.");
    srand((int)time(0));
    sweet_num[0]=rand()%35+1;
    for(b=1;b<7;b++)
    {
        sweet_num[b]=rand()%35+1;
        //printf("%d\n",a[b]);
        for(c=0;c<b;c++)
        {
            if(sweet_num[b]==sweet_num[c])
                b--;
        }
    }
    //for(d=0;d<7;d++)
       //printf("%d\n",sweet_num[d]);
    order(sweet_num);
    for(d=0;d<7;d++)
    {
        scanf("%d",num);
    }
    order(num);
    for(e=0;e<7;e++)
    {
        if(sweet_num[e]==num[e])
            gain+=1;
    }
    switch(e)
    {
        case 7:
            printf("congratulation,you will get $5,000,000");
            break;
        case 6:
            printf("congratulation,you will get $3,000,000");
            break;
        case 5:
            printf("congratulation,you will get $1,000,000");
            break;
        case 4:
            printf("congratulation,you will get $500,000");
            break;
        default:
            printf("it is so sorry you can get any thing");
    }
    money-=5;
    printf("would you want to try again?\ny  or n\n");
    scanf("%s",&answer);
    if(answer=='y')
        sweet_stakes();
    return 0;
}
//生日
int birthday()
{

}
//排序数字
int order(int num[])
{

    int c;
    int b;
    int a;
    for(a=0;a<7;a++)
    {
        for(b=a+1;b<7;b++)
        {
            if(num[a]>=num[b])
            {
                num[a]^=num[b];
                num[b]^=num[a];
                num[a]^=num[b];
            }
        }
    }
    //for(c=0;c<7;c++)
        //printf("%d\n",num[c]);
    return 0;
}
char place()
{
    char answer1,answer2;
    printf("%s  there are ten city in this world.\nthey are a,b,c,d,e,f,g,h,i,j",name);
    printf("and now you are in the a city,it is the most important city here.\nso the price of everything may be higher than other city.\n");
    printf("so,which city do you want to go.\n");
    printf("oh,you have a big warehouse with you,so you can transact with others.\n");
    printf("intput y or n\n");
    scanf("%s",&answer1);
    if(answer1=='n')
        printf("it is so pity\n");
    /*else
    {
        printf("whitch city do you want to go?");
        scanf("%s",&answer2);
        if(answer2=='a')
            a();
        if(answer2=='b')
            b();
        if(answer2=='c')
            c();
        if(answer2=='d')
            d();
        if(answer2=='e')
            e();
        if(answer2=='f')
            f();
        if(answer2=='g')
            g();
        if(answer2=='h')
            h();
        if(answer2=='i')
            i();
        if(answer2=='j')
            j();
    }*/
}
//十个城市的设定
int a()
{

}
int main()
{
    char answer;
    printf("welcome to the world of game.\n");
    printf("please intput your name.\n");
    scanf("%s",name);
    printf("intput your birthday.\n");
    scanf("%d %d %d",&year,&month,&day);
    printf("design your money\n");
    scanf("%d",&money);
    place();
    printf("you can do a lot of things here,for exampie:buying sweetstakes.")
    printf("%s  do you want to buy some sweet stakes?\ny or n\n",name);
    scanf("%s",&answer);
    if(answer=='y')
        sweet_stakes();
    else
        printf("it is such a pity!\n");
    printf("besides,you can sale the things you buy among ten cities.\n");
    printf("also you can play stock market\n");
    printf("however,you can only do three things every day.\nand you have to pay $20 for your food and any other things.\n");
    printf("now,let us begin the game!\n");

}

