#include<stdio.h>
#include<stdlib.h>
void multiples(int *p)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d ",(*p)*i);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int *p;
	p=&n;
	multiples(p);
	return 0;
}
