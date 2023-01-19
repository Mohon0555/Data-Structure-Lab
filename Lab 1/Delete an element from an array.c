#include<stdio.h>
int main()
{

    int ara[100];
    int N,e,d,i,p;
    scanf("%d", &N);

    for(i=0; i<N; i++)
    {
        scanf("%d", &ara[i]);
    }

    printf("Enter position:");
    scanf("%d", &p);

    for(i=0; i<N; i++)
    {
        if(i==p)
          continue;
        printf("%d ", ara[i]);
    }
    return 0;

}

