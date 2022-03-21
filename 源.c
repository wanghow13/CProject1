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
enum color dd;
int main()
{
    printf("请输入你喜欢的颜色");
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

    return 0;
}
