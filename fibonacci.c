//Fibonacci Series using Recursion
#include<stdio.h>
int fib(int val);
int main()
{
    int i, n;
    printf("Enter the nth term: \n");
    scanf("%d",&n);
    printf("Fibonacci series of first %d no. is: \n",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}

int fib(int val)
{
    if(val==0)
    {
        return 0;
    }
    else if(val==1)
    {
        return 1;
    }
    else
    {
        return (fib(val-1)+fib(val-2));
    }
}
