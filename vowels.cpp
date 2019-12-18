#include<stdio.h>
int main()
{
	int a=123456;
	long int b=123456789;
	int c=560000;
	printf("a=%d",a);
	printf("\nb=%d",b);
	printf("\nc=%u",c);
	printf("\n&a=%d",&a);
	printf("\n&a=%u",&a);
	printf("\n&a=%p",&a);
	return 0;  
}
