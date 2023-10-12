#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	int val;
	int i;
	val = 98;


	i = ft_isascii(val);
	printf("%d ft_isascii\n", i);
	i = (isascii(val));
	printf("%d isascii\n", i);

	printf("_______________  \n");
	
	i = ft_isalnum(val);
	printf("%d ft_isalnum\n", i);
	i = (isalnum(val));
	printf("%d isalnum\n", i);

	printf("_______________  \n");
	
	i = ft_isprint(val);
	printf("%d ft_isprint\n", i);
	i = (isprint(val));
	printf("%d isprint\n", i);


	printf("_______________  \n");


	char buffer[20];

	printf("buffer %s\n", buffer);

	ft_memset(buffer, 'A', 20);
	printf("buffer 20A : %s\n", buffer);

	ft_memset(buffer, 'B', 15);
	printf("buffer 15B5A : %s\n", buffer);

	memset(buffer, 'X', 10);
	printf("buffermemset 10X5B5A : %s\n", buffer);


	printf("_______________  \n");


	printf("buffer %s\n", buffer);	



	char str[] = "salut les connards";
	int len;

	len = ft_strlen(str);
	printf("ft_strlen %d\n", len);

	len = strlen(str);
	printf("strlen %d\n", len);


	printf("_______________  \n");


	return (0);
}
