#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int spidey(int n)
{
    int m=n,sum=0;
    do
    {
        sum+=n%16;
        n/=16;
    }
    while(n!=0);
    if(gcd(m,sum)>1) return 1;
    else return 0;
}

int main() {
    int t;
    scanf("%d",&t); //number of test cases
    while(t--)
    {
        int x,y,count=0;
        scanf("%d%d",&x,&y);
        for(int i=x;i<=y;i++)
        {
            if(spidey(i))
                count++;
        }
        printf("%d\n",count);
    }
       
    return 0;
}
