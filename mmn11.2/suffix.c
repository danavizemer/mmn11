#include <stdio.h>
#include <string.h>

int suffix(char str[], char c)
{
	int suffixesNum = 0;
	int i;
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == c)
		{
			suffixesNum++;
			printf("%s\n", str + i);
		}
	}
	return suffixesNum;
}
