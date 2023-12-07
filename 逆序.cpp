#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void revers(int n)
{
	int flag = 0;
	if (n == 0)
	{
		return;
	}
	else if(n>0)
	{
		if (flag == 0&&n%10==0)
		{
			flag == 1;
			return ;
		}
		else
		{
			printf("%d", n % 10);
			revers(n / 10);
		}
	}
	else
	{

		if (flag == 0 && n % 10 == 0)
		{
			flag == 1;
			return ;
		}
		else
		{
			printf("%d", -n % 10);
			revers(n / 10);
		}
	}
}
int main() 
{
	int n;
	scanf("%d", &n);
	revers(n);
	return 0;
}