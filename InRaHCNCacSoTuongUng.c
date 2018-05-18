#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int i;
	int j;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
		if( i==1 || j==1 || i==a || j==b)
		printf("1");
		else printf("0");
		}
		printf("\n");
	}
}
