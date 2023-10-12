#include <stdio.h>
#include <string.h>
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


	printf("_______________  \n");


	char buffer[20];

	printf("buffer %s\n", buffer);

	ft_memset(buffer, 'A', 20);
	printf("buffer 20A : %s\n", buffer);

	ft_memset(buffer, 'B', 15);
	printf("buffer 15B5A : %s\n", buffer);

	memset(buffer, 'X', 10);
	printf("buffer 10X5B5A : %s\n", buffer);

	return (0);
}
