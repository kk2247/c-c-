#include <stdio.h>
#include <string.h>
int main(void)
{
    int num1;
    int num2;
    char operator[10];
    int result = 0;
    printf("请输入第一个数:");
    scanf("%d",&num1);
    printf("请输入符号");
    scanf("%s",operator);
    printf("请输入第二个数：");
    scanf("%d",&num2);
    if(strcmp(operator,"/") == 0)
    {
        if(num2 == 0)
        {
            printf("除数不能为0，请重新输入");
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
    printf("结果是%d",result);
    return 0;
}
