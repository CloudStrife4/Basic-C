#include <stdio.h>
int main()
{
char namef[20],namem[20],namel[20];
printf("Enter Full Name \n");
scanf("%s %s %s",namef,namem,namel);
printf("The Abbreviated name is %c %c %c",namef[0],namem[0],namel[0]);
}