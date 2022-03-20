#include <stdio.h>
int EC(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	printf("%d %d", a, b);
}