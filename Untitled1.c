#include <stdio.h>
#include <string.h>
int main(void)
{
    int num1;
    int num2;
    char operator[10];
    int result = 0;
    printf("�������һ����:");
    scanf("%d",&num1);
    printf("���������");
    scanf("%s",operator);
    printf("������ڶ�������");
    scanf("%d",&num2);
    if(strcmp(operator,"/") == 0)
    {
        if(num2 == 0)
        {
            printf("��������Ϊ0������������");
            scanf("%d",&num2);
        }
        else
        {
            result = num1 / num2;
        }
    }
    if(strcmp(operator,"+") == 0)
    {
        result = num1 + num2;
    }
    if(strcmp(operator,"-") == 0)
    {
        result = num1 - num2;
    }
    if(strcmp(operator,"*") == 0)
    {
        result = num1 * num2;
    }
    printf("�����%d",result);
    return 0;
}
