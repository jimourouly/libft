/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 08:53:54 by jroulet           #+#    #+#             */
/*   Updated: 2023/10/14 13:02:49 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	int val;
	int i;
	val = 103;
	printf(" \n");
	printf(" \n");

	printf("_______________TEST IASCII_______________  \n");
	printf(" \n");
	i = ft_isascii(val);
	printf("%d ft_isascii\n", i);
	i = (isascii(val));
	printf("%d isascii\n", i);
	printf(" \n");
	printf(" \n");
	printf("_______________TEST ISALNUM_______________  \n");
	printf(" \n");
	
	i = ft_isalnum(val);
	printf("%d ft_isalnum\n", i);
	i = (isalnum(val));
	printf("%d isalnum\n", i);

	printf(" \n");
	printf(" \n");
	printf("_______________TEST ISPRINT_______________  \n");
	printf(" \n");
	
	i = ft_isprint(val);
	printf("%d ft_isprint\n", i);
	i = (isprint(val));
	printf("%d isprint\n", i);


	printf(" \n");
	printf(" \n");
	printf("_______________TEST MEMSET_______________  \n");
	printf(" \n");


	char buffer[50];

	printf("buffer %s\n", buffer);

	ft_memset(buffer, 'A', 20);
	printf("buffer 20A : %s\n", buffer);

	ft_memset(buffer, 'B', 15);
	printf("buffer 15B5A : %s\n", buffer);

	memset(buffer, 'X', 10);
	printf("buffermemset 10X5B5A : %s\n", buffer);


	printf(" \n");
	printf(" \n");
	printf("_______________TEST BZERO_______________  \n");
	printf(" \n");

	char bzerostr[50];
	strcpy(bzerostr, "Salut tout le monde");
	printf("buffer %s\n", bzerostr);
	ft_bzero(bzerostr, 10);
	printf("ft_bzero %s\n", bzerostr);
	strcpy(bzerostr, "Salut tout le monde");
	printf("buffer %s\n", bzerostr);
	bzero(bzerostr, 10);
	printf("bzero %s\n", bzerostr);


	printf(" \n");
	printf(" \n");
	printf("_______________TEST STRLEN_______________  \n");
	printf(" \n");
	char str[] = "salut tout le monde";
	int len;

	len = ft_strlen(str);
	printf("ft_strlen %d\n", len);

	len = strlen(str);
	printf("strlen %d\n", len);


	printf(" \n");
	printf(" \n");
	printf("_______________TEST MEMCPY_______________  \n");
	printf(" \n");
	char *ret;
	char dest[50];
	char src[50] = "Salut tout le monde";

	ret = ft_memcpy(dest, src, 9);
	printf("ft_memcpy %s\n", ret);

	char *ret2;
	char dest2[50];
	char src2[50] = "Salut tout le monde";

	ret2 = memcpy(dest2, src2, 9);
	printf("memcpy %s\n", ret2);

	printf(" \n");
	memset(dest, '\0', 20);
	memset(src, 'X', 20);
	printf("src %s\n", src);
	printf("dest %s\n", dest);


	printf(" \n");
	printf(" \n");
	printf("_______________TEST MEMMOVE_______________  \n");
	printf(" \n");
	ft_memmove(dest, src, 20);
	printf("ft_memmove DEST %s\n", dest);
	printf("\n");

	memset(dest, '\0', 20);
	printf("dest");
	printf("\n");
	memmove(dest, src, 20);
	printf("memmove DEST %s\n", dest);


	printf(" \n");
	printf(" \n");
	printf("_______________TEST STRLCPY_______________ \n");
	printf(" \n");
	memset(dest, 'X', 10);
	dest[10] = '\0';
	memset(src, 'Y', 20);

	printf("dest %s\n", dest);
	printf("src %s\n", src);
	

	int r;
	r = strlcpy(dest, src, 5);
	printf("STRLCPY '%s' dans '%s', longueur SRC  %d\n",
            src,
            dest,
            r
          );
	printf("dest %s\n", dest);


	printf("  \n");

	memset(dest, 'Y', 10);
	dest[10] = '\0';
	memset(src, 'X', 20);

	printf("dest %s\n", dest);
	printf("src %s\n", src);

	r = ft_strlcpy(dest, src, 5);
	printf("FT_STRLCPY '%s' dans '%s', longueur SRC  %d\n",
            src,
            dest,
            r
          );
	printf("dest %s\n", dest);

	printf(" \n");
	printf(" \n");
	printf("_______________TEST STRLCAT_______________  \n");
	printf(" \n");
	int size;
	size = 45;
	memset(dest, 'Y', 10);
	dest[10] = '\0';
	memset(src, 'X', 20);


	r = ft_strlcat(dest, src, size);
	printf("ST_STRLCAT resultat %d\n", r);
	printf("size %i\n",size);
	if(r > size)
		printf("Resultat tronque");
	if(r < size)
		printf("Resultat copie");

	printf("\n");
	r = strlcat(dest, src, 15);
	printf("STRLCAT resultat %d\n", r);


	printf(" \n");
	printf(" \n");
	printf("_______________TEST TOUPPER_______________  \n");
	printf(" \n");
	
	char test;
	int temp;
	temp = val;
	test = val + 0;
	printf("Initial Value %c\n", test);
	val = ft_toupper(val);
	test = val + 0;
	printf("ft_toupper result %c\n", test);
	
	val = temp;
	val = toupper(val);
	test = val + 0;
	printf("toupper result %c\n", test);
	val = temp;

	printf(" \n");
	printf(" \n");
	printf("_______________TEST LOWER_______________  \n");
	printf(" \n");
	

	temp = val;
	test = val + 0;
	printf("Initial Value %c\n", test);
	val = ft_tolower(val);
	test = val + 0;
	printf("ft_tolower result %c\n", test);
	
	val = temp;
	val = tolower(val);
	test = val + 0;
	printf("tolower result %c\n", test);
	

	printf(" \n");
	printf(" \n");
	printf("_______________TEST STRCHR_______________  \n");
	printf(" \n");

	char let[10] = "aaaaagaaa";
	char *res;

	res = ft_strchr(let, val);
	printf("FT_STRCHR result %s\n", res);

	res = strchr(let, val);
	printf("STRCHR result %s\n", res);




	return (0);
}
