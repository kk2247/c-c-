#include <stdio.h>
#include <string.h>
int main()
{
	//char chi[][3]={"零","壹","贰","叁","肆","伍","陆","柒","捌","玖"};
	char chi[][3]={"l","y","e","s","si","w","l","q","b","j"};
	int a[10];
	int c[10];
	float mon1;
	int mon2,mon3;
	int m,y,n,x;
	int i,j,k,b;
	float mon;
    scanf("%f",&mon);
	mon1=mon-(int) mon;
	m=(int) mon;
	y=mon-m;
	n=y*100%10;
	x=y*10;
	for(i=0;i<=8;i++)
	{
		a[i]=m%10;
		m/=10;
	}
	/*for(i=8;i>=0;i--)
	{
		printf("%d",a[i]);
	}*/
	/*for(i=8;i>=0;i--)
	{
		if(a[i]!=0)
		{
		    printf("%d\n",i+1);
			for(j=i;j>=0;j--)
				printf("%s",chi[a[j]]);
			break;
		}
	}*/
	for(i=8;i>=0;i--)
	{
		if(a[i]!=0)
		{
		    for(b=0;b<=i;b++)
                c[b]=a[i-b];
            break;
		}
	}
	for(b=0;b<=i;b++)
        printf("%d",c[b]);
	if(i+1>4)
    {
        n=i-3;
        for(k=0;k<=n;k++)
        {
            switch(n-k)
            {
                case 4:
        {
            if(c[k]==0)
            {
                printf("ling");
                break;
            }
            printf("%s qian",chi[c[k]]);
            continue;
        }
        case 3:
        {
            if(c[k]==0)
            {
                printf("ling");
                break;
            }
            printf("%s bai",chi[c[k]]);
            continue;
        }
        case 2:
        {
            if(c[k]==0)
            {
                if(c[k+1]==0)
                    break;
                printf("ling");
                break;
            }
            printf("%s shi",chi[c[k]]);
            continue;
        }
        case 1:
        {
            if(c[k]==0)
            {
                if(c[k+1]==0)
                    break;
                break;
            }
            printf("%s ",chi[c[k]]);
            continue;
        }
            }

        }
        printf("wan");
        for(k=0;k<=4;k++)
        {
            switch(4-k)
            {
                case 4:
        {
            if(c[k+n]==0)
            {
                if(c[k+n+1]==0)
                    break;
                printf("ling");
                break;
            }
            printf("%s qian",chi[c[k+n]]);
            continue;
        }
        case 3:
        {
            if(c[k+n]==0)
            {
                if(c[k+n+1]==0)
                    break;
                printf("ling");
                break;
            }
            printf("%s bai",chi[c[k+n]]);
            continue;
        }
        case 2:
        {
            if(c[k+n]==0)
            {
                if(c[k+n+1]==0)
                    break;
                printf("ling");
                break;
            }
            printf("%s shi",chi[c[k+n]]);
            continue;
        }
        case 1:
        {
            if(c[k+n]==0)
            {
                if(c[k+n-1]==0)
                    break;
                break;
            }
            printf("%s ",chi[c[k+n]]);
            continue;
        }
            }

        }
    }
    else
    {
        for(k=0;k<=i+1;k++)
        {
            switch(i+1-k)
            {
                case 4:
        {
            printf("%s qian",chi[c[k]]);
            continue;
        }
        case 3:
        {
            if(c[k]==0)
            {
                if(c[k+1]==0)
                    break;
                printf("ling");
                break;
            }
            printf("%s bai",chi[c[k]]);
            continue;
        }
        case 2:
        {
            if(c[k]==0)
            {
                if(c[k+1]==0)
                    break;
                printf("ling");
                break;
            }
            printf("%s shi",chi[c[k]]);
            continue;
        }
        case 1:
        {
            if(c[k]==0)
            {
                break;
            }
            printf("%s ",chi[c[k]]);
            continue;
        }
            }
        }

    }
	return 0;
}

