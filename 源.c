//#include <stdio.h>
//enum DAY
//{
//	MON = 1, TUE, WED, THU, FRI, SAT, SUN
//}day;
//int main()
//{
//	enum color {
//		red = 1, blue, black, white, green
//	};
//	//enum color myc2;
//
//
//	//printf("%s",red);
//
	//for (day = MON; day <= SUN; day++)
	//{
	//	printf("aaaaaaa%d\n", day);

 //  }
 //   enum day
 //   {
 //       saturday,
 //       sunday,
 //       monday,
 //       tuesday,
 //       wednesday,
 //       thursday,
 //       friday
 //   } workday;

 //   int a = 1;
 //   enum day weekend;
 //   weekend = (enum day)a;  //类型转换
 //   //weekend = a; //错误
 //   printf("weekend:%d", weekend);
 //   return 0;
//}
//#include <stdio.h>

//enum DAY
//{
//    MON = 1, TUE, WED, THU, FRI, SAT, SUN
//} day;
//int main()
//{
//    // 遍历枚举元素
//    for (day = MON; day <= SUN; day++) {
//        printf("枚举元素：%d \n", day);
//    }
//}
#include <stdio.h>
#include <stdlib.h>
enum color {
	red=4,blue,grey,black,green
}; 
const int MAX = 3;
const int MIN = 0;
enum color dd;
int main()
{
    /*printf("请输入你喜欢的颜色");
	scanf_s("%d", &dd);
	switch(dd)
    {
    case red:
        printf("你喜欢的颜色是红色");
        break;
    case green:
        printf("你喜欢的颜色是绿色");
        break;
    case blue:
        printf("你喜欢的颜色是蓝色");
        break;
    default:
        printf("你没有选择你喜欢的颜色");
    }

    return 0;*/
    //int a=11;
    //int* p;
    //char* s;
    //int sq;
    //p = &a;
    //s =11;
    //printf("a的指针为%p\n", p);
    //printf("a的指针为%p\n", s);
    //int  var = 20;   /* 实际变量的声明 */
    //int* ip;        /* 指针变量的声明 */

    //ip = &var;  /* 在指针变量中存储 var 的地址 */

    //printf("var 变量的地址: %p\n", &var);

    ///* 在指针变量中存储的地址 */
    //printf("ip 变量存储的地址: %p\n", ip);

    ///* 使用指针访问值 */
    //printf("*ip 变量的值: %d\n", *ip);
    //int* ptr = NULL;

    //printf("ptr 的地址是 %p\n", ptr);

    //return 0;
    int i;

    int ss[] = { 100,200,300 };
    int* p;
    p = ss;
    for (i = 0; i < MAX; i++)
    {
        printf("ss的地址%p\n", ss);
        printf("ss的值%d\n", *p);
        p++;
    }
    return 0;












}
