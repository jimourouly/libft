#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int ft_isascii(char c)
{
	if (c >= 0 && c < 127)
	{
		return(1);
	}
	return (0);
}

int main(void)
{
	char str;
	int i;
	int test;

	str = 128;
	i = ft_isascii(str);
	test = (isascii(str));

	printf("%d\n", i);
	printf("%d\n", test);
	
}
