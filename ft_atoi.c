#include "libft.h"
int ft_atoi(const char *nptr)
{
	int i;
	int res;
	int neg;

	i = 0;
	neg = 1;
	res = 0;

	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if(nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			neg *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * neg);
}
