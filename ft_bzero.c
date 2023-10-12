#include "libft.h"

void ft_bzero(void *s, size_t len)
{
	char *str;

	str = *s;
	while(len)
	{
		*str = "\0";
		str++;
		len--;
	}
	return s;
}
