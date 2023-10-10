#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int ft_isalnum(char c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

int main(void)
{
	
	char str;
	int isalnu;
	int test;

	str = '}';
	test = isalnum(str);
	isalnu = ft_isalnum(str);
	printf("%d\n", test);
	printf("%d\n", isalnu);
}
