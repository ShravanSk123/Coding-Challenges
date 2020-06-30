// Will is missing
// Challenge 1 - 30/06/2020
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int t,flag=0;
    scanf("%d",&t);
    while(t--)
    {
        flag=0;
        int x,hop,q=0;
        scanf("%d%d",&x,&hop);
        int ud[x];
        for(int i=0;i<x;i++)
            scanf("%d",&ud[i]);
        for(int i=0;i<x;i++)
            if(ud[i]==0) q++;
        if(q==x) 
        {
            printf("YES\n");
            flag=1;
        }
        for(int i=1;i<x;)
        {
            if(ud[i]==0)
                i++;
            if(ud[i]==1)
            {
                i--;
                i+=hop;
                x: if(i>x)
                {
                    printf("YES\n");
                    flag=1;
                }
                else if(i<x && i+hop<x)
                {
                    i+=hop;
                    goto x;
                }
                else break;
            }
        }
        if(flag==0)
            printf("NO\n");
    }
}