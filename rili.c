#include <stdio.h>
int week()
{
	int year;
	int a;
	int one=0;
	int he;
	int sum=0;
	printf("�������\n");
	scanf("%d",&year);
	year=year-1;
    for(;year>=1990;year--)
	{
		if(year%100!=0&&year%4==0||year%100==0&&year%400==0)
        {
            he=366;
        }
		else
        {
            he=365;
        }
		sum=sum+he;
		//printf("%d",sum);
	}
    a=sum%7;
	printf("�����Ԫ��\n");
	printf("%d",sum);
	switch(a)
	{
        case 6:
            printf("����������\n");
            break;
		case 0:
	        printf("��������һ\n");
			break;
		case 1:
	        printf("�������ܶ�\n");
			break;
		case 2:
	        printf("����������\n");
			break;
		case 3:
	        printf("����������\n");
			break;
		case 4:
            printf("����������\n");
			break;
		default:
	        printf("����������\n");
	}
		return 0;
}
int month()
{
	int k,suum;
	int m,n;
	int o,p;
	int q;
	int sum=0;
	int year,i;
	int ago[20]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("�������\n");
	scanf("%d",&year);
	i=year-1990-1;
	for(n=1990;n<year;n++)
	{
		if(n%100!=0&&n%4==0||n%100==0&&n%400==0)
        {

            k=366;
           // printf("%d",n);
        }
		else
        {
            k=365;
        }
        sum=sum+k;
        //printf("%d\n",sum);
	}
    if(year%100!=0&&year%4==0||year%100==0&&year%400==0)
        ago[1]=29;
    else
        ago[1]=28;
	printf("�����·�\n");
	scanf("%d",&i);
	for(m=0;m<=i-2;m++)
	{
		sum+=ago[m];
	}
	printf("    MON    TUE    WED    THU    FRI    SAT    SUN\n");
	o=sum%7;
	suum=sum;
	for(p=1;p<=o;p++)
		printf("       ");
	for(q=1;q<=ago[i-1];q++)
    {
		printf("     %2d",q);
		suum++;
		if(suum%7==0)
            printf("\n");
    }
	return 0;
}
int year()
{
	int k,suum;
	int m,kk,n;
	int o,p;
	int q;
	int sum=0;
	int year,i;
	int ago[20]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("�������\n");
	scanf("%d",&year);
	i=year-1990-1;
	for(n=1990;n<year;n++)
	{
		if(n%100!=0&&n%4==0||n%100==0&&n%400==0)
        {
            k=366;
        }
		else
        {
            k=365;
        }
		sum=sum+k;
	}
	if(year%100!=0&&year%4==0||year%100==0&&year%400==0)
        ago[1]=29;
    else
        ago[1]=28;
	printf("%d",ago[1]);
	kk=sum;
	for(i=1;i<=12;i++)
	{
	    sum=kk;
	    for(m=0;m<=i-2;m++)
	    {
		    sum+=ago[m];
	    }
	    printf("%d��\n",i);
	    printf("    MON    TUE    WED    THU    FRI    SAT    SUN\n");
	    o=sum%7;
	    suum=sum;
        for(p=1;p<=o;p++)
		    printf("       ");
	    for(q=1;q<=ago[i-1];q++)
        {
		    printf("     %2d",q);
		    suum++;
		    if(suum%7==0)
                printf("\n");
        }
        printf("\n");
	}
	return 0;
}
int day()
{
    int k,suum,day;
	int m,n;
	int o,p;
	int q,wee;
	int sum=0;
	int year,i;
	int ago[20]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("�������\n");
	scanf("%d",&year);
	i=year-1990-1;
	for(n=1990;n<year;n++)
	{
		if(n%100!=0&&n%4==0||n%100==0&&n%400==0)
        {

            k=366;
           // printf("%d",n);
        }
		else
        {
            k=365;
        }
        sum=sum+k;
        //printf("%d\n",sum);
	}
    if(year%100!=0&&year%4==0||year%100==0&&year%400==0)
        ago[1]=29;
    else
        ago[1]=28;
	printf("�����·�\n");
	scanf("%d",&i);
	for(m=0;m<=i-2;m++)
	{
		sum+=ago[m];
	}
	printf("��������\n");
	scanf("%d",&day);
	sum=sum+day;
	wee=sum%7;
    switch(wee)
    {
        case 0:
            printf("����������\n");
            break;
		case 1:
	        printf("��������һ\n");
			break;
		case 2:
	        printf("�������ܶ�\n");
			break;
		case 3:
	        printf("����������\n");
			break;
		case 4:
	        printf("����������\n");
			break;
		case 5:
            printf("����������\n");
			break;
		default:
	        printf("����������\n");
	}
}
int main()
{
    int choose;
    en:
	printf("������ѡ��\n");
	printf("�鿴ÿ���һ�������ڼ��������� 1��\n");
	printf("�鿴���������������� 2��\n");
	printf("�鿴���������������� 3��\n");
	printf("�鿴�������ڼ��������� 4\n");
	printf("�˳������� 0��\n");
	scanf("%d",&choose);
	switch(choose)
    {
        case 1:
            week();
            goto en;
            break;
        case 2:
            month();
            goto en;
            break;

        case 3:
            year();
            goto en;
            break;
        case 4:
            day();
            goto en;
            break;
        default:
            goto loop;
    }
    loop:
    return 0;
}
