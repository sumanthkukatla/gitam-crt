#include<stdio.h>
int main()
{
int n,i=0,a[100];
scanf("%d",&n);
while(n!=0)
{
    a[i]=n%16;
    i++;
    n=n/16;
}
for(i=i-1;i>=0;i--)
{
    if(a[i]>10&&a[i]<=15)
    printf("%c",a[i]+55);
    else
    printf("%d",a[i]);
    
}
return 0;
}