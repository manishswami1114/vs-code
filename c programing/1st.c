#include<stdio.h>

int main()
{
	int v1 = 10;
	int v2 = 25;
	int* p1 = &v1;
	int* p2 = &v2;
	*p1 += *p2;
	p2 = p1;
	*p2 = *p1 + *p2;
	printf("%d %d", v1, v2);
	return 0;
}