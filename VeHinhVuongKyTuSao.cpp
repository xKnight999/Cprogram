//n là cạnh của hình vuông và in ra hình vuông các ký tự *
//
//
#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
