#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int main(void)
{
	char str[] = "salut la compagnie";
	int len;
	int test;

	//str[] = "salut la compagnie";
	test = strlen(str);
	len = ft_strlen(str);

	printf("%d\n", test);
	printf("%d\n", len);
}
