#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	int str;
	int i;
	int test;
	str = 55;


	i = ft_isascii(str);
	test = (isascii(str));
	printf("%d ft_isascii\n", i);
	printf("%d isascii\n", test);

	printf("_______________  \n");
	
	i = ft_isalnum(str);
	test = (isalnum(str));
	printf("%d ft_isalnum\n", i);
	printf("%d isalnum\n", test);

	printf("_______________  \n");
	
	i = ft_isprint(str);
	test = (isprint(str));
	printf("%d ft_isprint\n", i);
	printf("%d isprint\n", test);

	return (0);
}
