#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char name[20];
int year,month,day;
int now_year=2020,now_month=1,now_day=1;
int money;
int warehouse=500;
int energy=12;
int age;
//人生游戏初始化设定。
//购买彩票
//命运
int fate()
{
    int chance;
    int i;
    srand((int)time(0));
    chance=rand()%10+1;
    printf("everyday different thing will happen in our life,\n");
    printf("so,you will go though some good things or bad things.\n");
    switch(chance)
    {
    case 1:
    {
        srand((int)time(0));
        i=rand()%5+1;
        printf("it is so great that you get some money\n");
        money=money+i*100;
    }
    case 2:
    {
        printf("it is so sorry that you lost some money\n");
        srand((int)time(0));
        i=rand()%5+1;
        money=money-i*100;
    }
    case 3:
    {
        printf("today may be a bad day to work.you decide to have rest\n");
        energy=0;
    }
    case 4:
    {
        printf("you are so excited to have a job\n");
        energy=energy+12;
    }
    case 5:
    {
        printf("you are sick,so have to lye in the hospital.\n");
        energy=0;
        now_day++;
    }
    default:
        printf("it is a peace day!\n");
    }
    return 0;
}
int date()
{
    int daynum;
    int i,j=0,k=1;
    int mon[13]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(now_year%100!=0&&now_year%4==0||now_year%100==0&&now_year%400==0)
    {
        daynum=366;
        mon[1]=29;
    }
    else
    {
        daynum=365;
        mon[1]=28;
    }
    if(energy<=0)
        now_day++;
    i=now_day;
    if(i>mon[j])
        j++;
    if(j>11)
        now_year++;
    now_day=i;
    now_month=j+1;
    return 0;
}
int sweet_stakes()
{
    int sweet_num[20];
    int num[20];
    int b,c,d,e,f;
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
      // printf("%d\n",sweet_num[d]);
    //order(sweet_num);
    for(d=0;d<7;d++)
    {
        scanf("%d",num);
    }
    //order(num);
    for(e=0;e<7;e++)
    {
        for(f=0;f<7;f++)
        {
            if(sweet_num[e]==num[f])
            {
                gain+=1;
            }
        }
    }
    switch(gain)
    {
        case 7:
            printf("congratulation,you will get $5,000,000\n");
            break;
        case 6:
            printf("congratulation,you will get $3,000,000\n");
            break;
        case 5:
            printf("congratulation,you will get $1,000,000\n");
            break;
        case 4:
            printf("congratulation,you will get $500,000\n");
            break;
        default:
            printf("it is so sorry you can get any thing\n");
    }
    money-=5;
    printf("would you want to try again?\ny  or n\n");
    scanf("%s",&answer);
    if(answer=='y')
        sweet_stakes();
    return 0;
}
//交易
char shopping()
{
    int choose;
    int i,j,k;
    char shop[4][20][20]={"wine","red wine","smoke","drink","peer","purple wine","book"},
    {"gun","gold","silver","celephone","computer","televition","drug","tea","car"},
    {"vegetable","meat","peroid","andy","chocklate","rise","medicine"};
    int price[20];           //9                                               9                                                         7
    int high_price[20];
    int great_price[15];
    srand((int)time(0));
    for(i=0;i<=10;i++)
    {
        price[i]=rand()%10+10;
    }
    for(j=0;j<=10;j++)
    {
        high_price[j]=rand()%50+50;
    }
    for(k=0;k<=10;k++)
    {
        great_price[k]=rand()%500+500;
    }
    printf("here are the price of the things.\n");
    printf("  ");
}
//生日
int birthday()
{
    date();
    if(now_day==day&&now_month==month)
    {
        printf("today is your birthday,celebration!");
        age++;
        printf("now,the game give you some money to have your party.");
        money=money+1000;
    }
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
    char answer3;
    printf("%s  there are ten city in this world.\nthey are a,b,c,d,e,f,g,h,i,j",name);
    printf("oh,you have a big warehouse with you,so you can transact with others.\n");
    loop:
    printf("and now you are in the 'a' city,it is the most important city here.\nso the price of everything may be higher than other city.\n");
    printf("so,which city do you want to go.\n");

    printf("do you want to go to another city?");
    printf("intput y or n\n");
    scanf("%s",&answer1);
    if(answer1=='n')
    {
        printf("it is so pity\n");
        printf("now you decide to stay in the 'a' city.");
        printf("you can do a lot of things here,for exampie:buying sweetstakes.");
        printf("%s  do you want to buy some sweet stakes?\ny or n\n",name);
        scanf("%s",&answer2);
        if(answer2=='y')
            sweet_stakes();
        else
            printf("it is such a pity!\n");
        printf("besides,you can sale the things you buy among ten cities.\n");
        printf("do you want to do some shopping?\n  y  or  n");
        scanf("%s",&answer3);
        if(answer3=='y')
        {

        }
    }
    else
    {
        energy=energy-3;
        money-=100;
        printf("whitch city do you want to go?");
        scanf("%s",&answer2);
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
    }
}
//十个城市的设定
int a()
{

}
int b()
{

}
int c()
{

}
int d()
{

}
int e()
{

}
int f()
{

}
int g()
{

}
int h()
{

}
int i()
{

}
int j()
{

}
int main()
{
    char answer;
    printf("welcome to the world of game.\n");
    printf("today is 1st,january,2020\n");
    printf("please intput your name.\n");
    scanf("%s",name);
    printf("intput your birthday.\n");
    scanf("%d %d %d",&year,&month,&day);
    printf("design your money\n");
    scanf("%d",&money);
    age=now_year-year;
    place();
    printf("also you can play stock market\n");
    printf("however,you can only do three things every day.\nand you have to pay $20 for your food and any other things.\n");
    printf("now,let us begin the game!\n");
    birthday();

}

