#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int z=0,o=0;
    int i,r;
    for(i=1;i<=8;i++)
    {
        r=n&(1<<(i-1));
        if(r)
        {
            o++;
        }
        else
        {
            z++;
        }
    }
    printf("Zeroes:%d\nOnes:%d",z,o);
    return 0;
}
