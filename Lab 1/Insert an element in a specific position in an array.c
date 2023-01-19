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
    printf("Enter Data:");
    scanf("%d", &d);

    printf("Enter Position:");
    scanf("%d", &p);


    for(i=N; i>p; i--){
            ara[i]=ara[i-1];
    }
    ara[p]=d;
    for(i=0;i<=N;i++){
         printf("%d ", ara[i]);
         }
    return 0;

}
