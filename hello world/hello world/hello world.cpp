#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include <stdio.h>
int main() {

	int r, m, n,k,y;
	printf("请输入m,n:");
	scanf("%d,%d", &m, &n);
	k = m * n;
	r = m % n;
	while (r!=0)
	{
		m = n;
		n = r;
		r = m % n;

	}
	y = k / n;
	printf("最大公约数:%d\n", n);
	printf("最小公倍数:%d\n", y);
}
