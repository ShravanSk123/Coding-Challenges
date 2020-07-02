#include <stdio.h> 

int maxab(int a,int b)
{
    return (a>b)?a:b;
}
int maxlength(int arr[], int n) 
{ 
    int max = 0;
    for (int i = 0; i < n; i++) {  
        int sum = 0; 
        for (int j = i; j < n; j++) { 
            sum += arr[j]; 
            if (sum == 0) 
                max = maxab(max, j - i + 1); 
        } 
    } 
    return max; 
}  
int main() 
{ 
    int n,t;
    scanf("%d",&t); //number of test cases
    while(t--)
    {
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        printf("%d\n",maxlength(arr,n));
    }
    return 0; 
}
