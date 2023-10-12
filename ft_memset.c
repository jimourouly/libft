#include "libft.h"

void *ft_memset(void *s, int c, size_t len)
{
	char *str;

	str = s;
	while(len)
	{
		*str = (unsigned char)c;
		str++;
		len--;
	}
	return s;
}
