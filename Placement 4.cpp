#include<iostream>
#include<string.h>
using namespace std;
extern void fun(void *v);
int main()
{
enum{x1='a',x2,x3,x4,x5}exmap;
char x=x1-x3;
printf("%d",x);
}

