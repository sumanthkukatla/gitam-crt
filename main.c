#include<stdio.h>
int large(int x);
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",large(a));
    return 0;
}
int large(int x)
{
    int b,max=0;
    while(x!=0)
    {
        b=x%10;
        if(b>max)
        max=b;
        x=x/10;
    }
    return max;
}