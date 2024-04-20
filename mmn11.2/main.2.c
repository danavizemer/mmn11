
#include <stdio.h>
#include <string.h>
#include "data.2.h"

int main()
{
char str[size] = { 0 };
char c;
printf("Enter a char and then a string\n");
scanf("%c", &c); /* \n stdin*/
scanf("%s", str);

int suffixRes = suffix(str, c);
printf("%d\n", suffixRes);
}
