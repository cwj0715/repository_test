#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include <stdio.h>
int main() {

	int r, m, n,k,y;
	printf("������m,n:");
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
	printf("���Լ��:%d\n", n);
	printf("��С������:%d\n", y);
}
