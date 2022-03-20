#include <stdio.h>

int main()
{
    int price = 0;

    printf("请输入金额（元）：");
    scanf_s("%d", &price);

    int change = 100 - price;

    printf("%d\n", change);
   kk();

    return 0;
}
extern int kk()
{
    int a;
    int b;

   
    scanf_s("%d %d",&a,&b);
    if(a>b)
    {
        printf("两个数中大的是%d",a);

    }
    else
    {
        printf("两个数中大的是%d",b);

    }


} 
