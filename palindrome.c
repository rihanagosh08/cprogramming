#include <stdio.h>

int main()
{
    int n,k,r,i,sum=0;
    scanf("%d",&n);
    k=n;
while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(k==sum)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

}
