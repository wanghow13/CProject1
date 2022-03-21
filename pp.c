#include <stdio.h>
int EC(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	printf("%d %d", a, b);
}
#include <stdio.h>

 enum DAY
{
	MON = 1, TUE, WED, THU, FRI, SAT, SUN
};

/*int main()
{
	enum DAY day;
	day = WED;
	printf("%d", day);
	return 0;
}*/