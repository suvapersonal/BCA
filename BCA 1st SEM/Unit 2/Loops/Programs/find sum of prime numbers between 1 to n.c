#include<stdio.h>
int main()
{
	int n, i, j, sum=0;
	printf("Enter the number ");
	scanf("%d",&n);
	for (i=2; i<=n; i++)// nth term series
	{
		int factors=0;//for dectecting and printing prime numbers each loop
		for (j=1; j<=i; j++)
		{
			if (i%j==0)
			{
				factors++;
			}
		}
		if (factors==2)
		{
			printf("%d ",i);
			sum=sum+i;
		}
	}
	printf("\nThe sum of the prime numbers is %d",sum);
	return 0;
}
