/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void add();
int main ()
{
  add();
  return 0;
}
void add()
{
    int a,b,c;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
}