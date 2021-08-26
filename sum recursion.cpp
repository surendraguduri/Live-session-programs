#include<stdio.h>
int sum(int n)
{
	int s,r;
	if(n>0)
	{
		r=n%10;
		s=r+sum(n/10);
	}
	return s;
	
}
int main()
{
	int n,s;
	scanf("%d",&n);
	s=sum(n);
	printf("%d",s);
	return 0;
}
