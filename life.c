#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
char name[20];
int lei=0;
int year,month,day;
int now_year=2020,now_month=1,now_day=1;
int money;
int warehouse=500;
int energy=12;
int age;
//������Ϸ��ʼ���趨��
//�����Ʊ
//����
int ware(char goods[],int num)
{
    char inner[100][20];
    int space[20];
    strcpy(inner[lei],goods);
    space[lei]=num;
}
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
    int b,c,d,e,f,g;
    char answer;
    int gain=0;
    printf("every sweet stake is $5");
    printf("please input your seven number.\n");
    srand((int)time(0));
    sweet_num[0]=rand()%35+1;
    for(b=1;b<7;b++)
    {
        sweet_num[b]=rand()%35+1;
        for(g=0;g<b;g++)
        {
            if(sweet_num[g]==sweet_num[b])
                b--;
        }
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
        scanf("%d",&num[d]);
        if(num[d]>35)
        {
            printf("the number can not be more than 35\n");
            d--;
        }
        for(g=0;g<d;g++)
        {
            if(num[d]==num[g])
            {
                d--;
                printf("the number can not be same\n");
            }
        }
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
//����
char shopping()
{
    int choose;
    char cho[10];
    int i,j,k,l,m;
    char answer,answer1,answer2;
    int temp;
    char shop[4][20][20]={{"wine","red wine","smoke","drink","peer","purple wine","book"},
    {"gun","gold","silver","celephone","computer","televition","drug","tea","car"},
    {"vegetable","meat","peroid","candy","chocklate","rice","medicine"}};
    int price[20];           //9                                               9                                                         7
    int high_price[20];
    int great_price[15];
    int num,sum;
    srand((int)time(0));
    for(i=0;i<=10;i++)
    {
        price[i]=rand()%10+10;
    }
    for(j=0;j<=10;j++)
    {
        high_price[j]=rand()%50+50;
        //printf("%d",high_price[j]);
    }
    for(k=0;k<=10;k++)
    {
        great_price[k]=rand()%500+500;
    }
    printf("here are the price of the things.\n");
    for(l=0;l<=6;l++)
    {
        printf("%2.d--",l+1);
        for(m=0;m<10;m++)
            printf("%-c",shop[0][l][m]);
        printf("%10.d\n",high_price[l]);

    }
    for(l=0;l<=8;l++)
    {
        printf("%2.d--",l+8);
        for(m=0;m<10;m++)
            printf("%-c",shop[1][l][m]);
        printf("%10.d\n",great_price[l]);

    }
    for(l=0;l<=6;l++)
    {
        printf("%2.d--",l+17);
        for(m=0;m<10;m++)
            printf("%-c",shop[2][l][m]);
        printf("%10.d\n",price[l]);
    }
    printf("do you want to know more about the goods?\n");
    printf("so,you want to do shopping or know more?intput\n  s  or   k\n");
    scanf("%s",&answer);
    if(answer=='s')
    {
        printf("choose the things you want to buy.\n");
        op:
        printf("if you want to quit,input 'quit'\n");
        fflush(stdin);
        printf("what do you want to buy?\n");
        scanf("%s",cho);
        while(strcmp(cho,"quit")!=0||money<0)
        {

            if(strcmp(cho,"wine") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=high_price[0]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                {
                    money=money-sum;
                    warehouse-=num;
                    if(money<=0||warehouse<=0)
                    {
                        printf("you can not buy them,because you don't have enough money or space\n");
                        shopping();
                    }
                }
                ware(cho,num);
                printf("you have $%d now\n",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit\n");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"red wine") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=high_price[1]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
            }
            if(strcmp(cho,"smoke") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=high_price[2]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"drink") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=high_price[3]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"peer") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=high_price[4]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"purple wine") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=high_price[5]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"book") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=high_price[6]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"gun") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=great_price[0]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"gold") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=great_price[1]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"silver") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=great_price[2]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"celephone") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=great_price[3]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"computer") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=great_price[4]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"televition") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=great_price[5]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"drug") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=great_price[6]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"tea") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=great_price[7]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"car") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=great_price[8]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"vegetable") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=price[0]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"meat") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=price[1]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"peroid") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=price[2]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"candy") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=price[3]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"chocklate") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=price[4]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"rice") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=price[5]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                goto op;
            }
            if(strcmp(cho,"medicine") == 0)
            {
                printf("intput the number\n");
                scanf("%d",&num);
                sum=price[6]*num;
                printf("you will pay $%d for them.are you sure?\ny or n\n  ",sum);
                scanf("%s",&answer1);
                if(answer1=='y')
                    money=money-sum;
                printf("you have $%d now",money);
                num=0;
                sum=0;
                printf("what do you want to buy?\nyou can leave when you input quit");
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+1);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[0][l][m]);
                    printf("%10.d\n",high_price[l]);

                }
                for(l=0;l<=8;l++)
                {
                    printf("%2.d--",l+8);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[1][l][m]);
                    printf("%10.d\n",great_price[l]);

                }
                for(l=0;l<=6;l++)
                {
                    printf("%2.d--",l+17);
                    for(m=0;m<10;m++)
                        printf("%-c",shop[2][l][m]);
                    printf("%10.d\n",price[l]);
                }
                energy-=3;
                if(energy==0)
                {
                    day+=1;
                    date();
                }
                goto op;
            }
        }
    }
    if(answer=='k')
    {
        printf("which goods do you want to know?\n");
        printf("wine,red wine,smoke,drink,peer,purple wine,book,gun,gold,silver,celephone,computer,televition,drug,tea,car,vegetable,meat,peroid,candy,chocklate,rice,medicine");
        scanf("%s",&answer2);
        picture(answer);
    }

    return 0;
}
int picture(int pic[],int n)
{
    int i,j,k;
    int b[50];
    b[0]=50;
    for(k=1;k<=n;k++)
        b[k]=b[k-1]+pic[k];
    printf("time\n");
    printf("^\n");
    for(i=0;i<=n;i++)
    {
        printf("|");
        for(j=1;j<=b[i];j++)
            printf("*");
        printf("\n");
    }
    printf("------------------------------------------------------------------------------------------------------------->    price");
}
int sale()
{

}
//����
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
//��������
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
        printf("do you want to do some shopping?\n  y  or  n\n");
        scanf("%s",&answer3);
        if(answer3=='y')
        {
            shopping();

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
//ʮ�����е��趨
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
int bank()
{
    int loanmonth;
    int loan,i;
    int remoney;
    int month1,year1;
    char answer;
    printf("if you don't have enough money,you can come here\n");
    printf("do you want to loan?\n    y  or  n");
    scanf("%s",&answer);
    if(answer=='y')
    {
        printf("how much do you want to loan\n");
        scanf("%d",&loan);
        month1=now_month;
        year1=now_year;
        money+=loan;
        remoney=loan;
        loanmonth=(now_year-year1-1)*12+12-month1+now_month;
    }
    for(i=0;i<loanmonth;i++)
    {
        loan*=1.01;
    }
    printf("your loan ")
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

