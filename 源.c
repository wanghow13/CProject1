#include <stdio.h>

int main()
{
	EC(1,6);
}
int EC(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	printf("%d %d", a, b);
}