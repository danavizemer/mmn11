
#include <stdio.h>

int main()
{
	unsigned int a, b;
	printf("Enter 2 positive numbers:\n");
	scanf("%u%u", &a, &b);

	unsigned int res = my_add(a, b);
	printf("The result of adding %u (", a);
	printNumInBase2(a);
	printf(")\nwith %u (", b);
	printNumInBase2(b);
	printf(")\nis %u (", res);
	printNumInBase2(res);
	printf(")\n");
}

void printNumInBase2(unsigned int num)
{
	int i;
	for (i = 31; i >= 0; i--)
	{
		printf("%d", (num >> i) & 1 == 1 ? 1 : 0);
	}
}
