#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int main (void)
{
	char str;
	int i;
	int test;

	str = 32;
	i = ft_isprint(str);
	test = isprint(str);

	printf("%d\n", i);
	printf("%d\n", test);
}
