#include<stdio.h>
int main()
{
    int A[]= {4,3,5,8,2};
    int i,n,f=-1;
    scanf("%d", &n);
    for(i=0; i<5; i++)
    {
        if(A[i]==n)
        {
            f=i;
        }
    }
    printf("%d",f);
    return 0;
}
