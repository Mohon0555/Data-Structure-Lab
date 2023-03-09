#include<stdio.h>



int max=8;
int stack[8];
int top=-1;


int Empty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int Full()
{
    if(top==max)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int push(int data)
{
    // int check;
    if (!Full())
    {
        top= top+1;
        stack[top]=data;
    }
    else
    {
        printf("cant add any data");
    }
}
int pop()
{
    int data;
    if(!Empty())
    {
        data=stack[top];
        top=top-1;
        return data;
    }
    else
    {
        printf("cant pop any data");
    }
}
int peek()
{

    return stack[top];
}

int main()
{
    int task=0,data;


    while(task!=5)
    {
        printf("press 1 for push \n");
        printf("press 2 for pop\n");
        printf("press 5 for quit \n");
        scanf("%c", &task);


        switch (task)
        {
        case '1':

            scanf("%d", &data);
            push(data);
            break;
        case '2':
            scanf("%d", &data);
            pop(data);
            break;
        case '5':
            return 0;
        }
    }

    while(!Empty())
    {
        printf("after push %d \n",data);
        break;
    }

    return 0;
}
