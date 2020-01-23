/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
struct book
{
    char name[100];
    int pages;
    float price;
};
int amin()
{
    struct book b;
    strcpy(b.name,"summy");
    b.pages=65221;
    b.price=2.10;
    printf("\nbook details are\n");
    printf("\n name is:%s",b.name);
    printf("\n no of pages",b.pages);
    printf("\n price is:%f",b.price);
    return 0;
}
