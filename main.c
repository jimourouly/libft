#include "libft.h"

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
	return (0);
}
