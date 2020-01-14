#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 1;
	double sum = 0.0;
	for (i = 1; i <= 100; i++)
	{
		sum += (j*1.0) / i;
		j = -j;
		printf("%lf", sum);
	}
	printf("sum = %lf\n", sum);
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 1;
	int sum = 0;
	for (i; i <= 100; i++)
	{
		if (i%10 == 9)
		{
			sum++;
		}
		if (i / 10 == 9)
		{
			sum++;
		}
	}
	printf("sum = %d\n", sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int m, n, i, temp;
	printf("请输入两个整数");
	scanf("%d %d", &m, &n);
	if (m < n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	for (i = n; i>0; i--)
	{
		if (m%i == 0 && n%i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int t, num1, num2, num3;
	printf("请输入三个数字");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 < num2)
	{
		t = num1;
		num1 = num2;
		num2 = t;
	}
	if (num1 < num3)
	{
		t = num1;
		num1 = num3;
	    num3 = t;
	}
	if (num2 < num3)
	{
		t = num2;
		num2 = num3;
		num3 = t;
	}
	printf("%d %d %d", num1, num2, num3);
	return 0;
}
