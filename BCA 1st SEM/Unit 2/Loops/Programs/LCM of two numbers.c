#include<stdio.h>
int main()
{
	int n1, n2, max, lcm;
	printf("Enter the two numbers ");
	scanf("%d %d", &n1, &n2);
	if (n1>n2)
	{
		max=n1;
	}
	else
	{
		max=n2;
	}
	while (1)
	{
		if (max%n1==0 && max%n2==0 )
		{
			lcm=max;
			break;
		}
		max++;
	}
	printf("LCM = %d",lcm);
	return 0;
}