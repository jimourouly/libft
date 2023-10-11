#include <stdio.h>
#include <unistd.h>
#include <string.h>

void ft_memset(void *b, int c, size_t len)
{
	unsigned int i;
	unsigned char *d;

	i = 0;
	d = (unsigned char *)b;

	while(i < len)
	{
		d[i++] = (unsigned char)c;
	}
	b = (void *)d;
	return (b);
}

int main(void)
{

}
