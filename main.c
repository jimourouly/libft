/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 08:53:54 by jroulet           #+#    #+#             */
/*   Updated: 2023/10/16 20:42:30 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

#define AC_BLACK "\x1b[30m"
#define AC_RED "\x1b[31m"
#define AC_GREEN "\x1b[32m"
#define AC_YELLOW "\x1b[33m"
#define AC_BLUE "\x1b[34m"
#define AC_MAGENTA "\x1b[35m"
#define AC_CYAN "\x1b[36m"
#define AC_WHITE "\x1b[37m"
#define AC_NORMAL "\x1b[m"


void ft_testint(int i, int k)
{
	if(i == k)
	{
    		printf("%s\t Test passed\n",AC_GREEN);
    		printf("%s \n", AC_NORMAL);
	}
	else 
	{
		printf("%s\t Test failed\n",AC_RED);
		printf("%s \n", AC_NORMAL);
	}
}

void ft_testchar(char *i, char *k)
{

	if(i == k)
	{
    		printf("%s\t Test passed\n",AC_GREEN);
    		printf("%s \n", AC_NORMAL);
	}
	else 
	{
		printf("%s\t Test failed\n",AC_RED);
		printf("%s \n", AC_NORMAL);
	}
}
	
void ft_testatoi(char * src)
{

	printf("testing ' %s'\n",src);
	printf("FT_ATOI \n \t result : %d\n",ft_atoi(src));
	printf("ATOI \n \t result : %d\n",atoi(src));
	ft_testint((ft_atoi(src)), (atoi(src)));
	printf(" \n");
}



void ft_testmemcmp(char *src, char *src2)
{
	int i = 0;
	printf("Src = %s\n", src);
	printf("Src2 = %s\n", src2);
	printf("FT_MEMCMP result =  %d\n", ft_memcmp(src, src2, 10));
	printf("MEMCMP result = %d\n", memcmp(src, src2, 10));
	ft_testchar(ft_strnstr(src,src2,i),strnstr(src,src2,i));
	printf(" \n");
}


	
void ft_teststrnstr(char *src, char *src2, int i)
{
	printf("\nhaystack =  %s \nneedle = %s \nlenght i = %d \n",src, src2,i);
	printf("FT_STRNSTR\n");
	printf("res = %s \n",ft_strnstr(src,src2,i));
	printf("STRNSTR\n");
	printf("res = %s \n",strnstr(src,src2,i));
	ft_testchar(ft_strnstr(src,src2,i),strnstr(src,src2,i));


}

void ft_testmemchr(char *str, int ch, int i)
{
	char *res;
	printf("str : %s\n", str);
	printf("searching : %c\n", ch);
	printf("length : %d\n", i);

	res = ft_memchr(str, ch, i);
	printf("FT_MEMCHR result :  %s\n", res);

	res = memchr(str, ch, i);
	printf("MEMCHR result :  %s\n", res);
	ft_testchar((ft_memchr(str, ch, i)),(memchr(str, ch, i)));
}

void ft_teststrncmp(char *a, char *b, int i)
{
	printf("String1 = %s\nString2 = %s\nlenght = %d\n\n",a,b,i);
	printf("FT_STRNCMP result %d\n", ft_strncmp(a,b,i));
	printf("STRNCMP result %d\n", strncmp(a,b,i));
	ft_testint(strncmp(a,b,i),ft_strncmp(a,b,i));
}

void ft_teststrrchr (char *dest, int tofind, char c)
{

	printf("Testing : %s\nTofind : %c\n\n",dest,c);
	printf("FT_STRRCHR result %s\n", ft_strrchr(dest, tofind));
	printf("STRRCHR result %s\n", strrchr(dest, tofind));
	ft_testchar(ft_strrchr(dest, tofind), strrchr(dest, tofind));
}

void ft_testcalloc(int i, int x)
{
	char *res;
	int j;
	int k;
	j = 1;
	k = 1;

	printf("Testing allocating memory\n");
	printf("\n");
	res  = ft_calloc(i, x);
	printf("\tTesting ft_calloc\n");
	if(!res)
	{
    	printf("%s",AC_RED);
		printf("Memory not allocated\n");
    	printf("%s", AC_NORMAL);
		j = 0;
	}
	else
	{
    	printf("%s",AC_GREEN);
		printf("Memory allocated\n");
    	printf("%s", AC_NORMAL);
		printf("Memory adress %p\n\n", res);
	}

	res = calloc(i, x);
	printf("\tTesting calloc\n");
	if(!res)
	{
    	printf("%s",AC_RED);
		printf("Memory not allocated\n");
    	printf("%s", AC_NORMAL);
		k = 0;
	}
	else 
	{
    	printf("%s",AC_GREEN);
		printf("Memory allocated\n");
    	printf("%s", AC_NORMAL);
		printf("Memory adress %p\n\n", res);
	}

	ft_testint(j, k);
}

void ft_teststrdup(char *s1)
{
	char *c;
	char *d;
	printf("\nTesting '%s'\n", s1);
	c = ft_strdup(s1);
	printf("FT_STRDUP result = :%s:\n", c);
	d = strdup(s1);
	printf("STRDUP result = :%s:\n", d);
	ft_testchar(c, d);

}

int main(void)
{
	char ch;
	int val;
	int i;
	char a[15];
	char b[15];
//	int *ptrint;
//	ptrint = 0;
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

	//printf("%d\n", Result);
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

	memset(src, '\0', 50);
	memset(src2, '\0', 50);
	char let[20] = "aaagaagaaa";
	char *res;

	res = ft_strchr(let, val);
	printf("FT_STRCHR result %s\n", res);

	res = strchr(let, val);
	printf("STRCHR result %s\n", res);

	printf(" \n");
	printf(" \n");
	printf("_______________TEST STRRCHR_______________  \n");
	printf(" \n");


	strcpy(let, "aaaaabaaaabaaaa");
	val = 'b';
	ft_teststrrchr(let, val, val);
	
	strcpy(let, "bbbbbbbbbbbaaba");
	val = 'b';
	ft_teststrrchr(let, val, val);

	printf(" \n");
	printf(" \n");
	printf("_______________TEST STRNCMP_______________  \n");
	printf(" \n");

	strcpy(a, "aaaaab");
	strcpy(b, "bbbbba");
	i = 10;
	ft_teststrncmp(a, b, i);
	
	strcpy(a, "aaaaab");
	strcpy(b, "aaaaab");
	i = 10;
	ft_teststrncmp(a, b, i);
	
	strcpy(a, "aaaaab");
	strcpy(b, "aaaaab");
	i = 1;
	ft_teststrncmp(a, b, i);
	
	strcpy(a, "aaaaaab");
	strcpy(b, "aaaaab");
	i = 10;
	ft_teststrncmp(a, b, i);
	
	strcpy(a, "aaafaab");
	strcpy(b, "aAaaaab");
	i = 10;
	ft_teststrncmp(a, b, i);


	printf(" \n");
	printf(" \n");
	printf("_______________TEST MEMCHR_______________  \n");
	printf(" \n");


	ch = 109;
	i = 20;
	strcpy(src, "Salut tout le monde");
	ft_testmemchr(str, ch, i);
	
	ch = 109;
	i = 16;
	strcpy(src, "Salut tout le monde");
	ft_testmemchr(str, ch, i);
	
	ch = 4;
	i = 20;
	strcpy(src, "Salut tout le monde");
	ft_testmemchr(str, ch, i);
	
	ch = 126;
	i = 0;
	strcpy(src, "Salut tout le monde");
	ft_testmemchr(str, ch, i);
	
	printf(" \n");
	printf(" \n");
	printf("_______________TEST MEMCMP_______________  \n");
	printf(" \n");

	strcpy(src, "Salut tout le monde");
	strcpy(src2, "Salut tous le monde");
	ft_testmemcmp(src, src2);
	
	strcpy(src, "Salut tous le monde");
	strcpy(src2, "Salut tout le monde");
	ft_testmemcmp(src, src2);
	
	strcpy(src, "Salut tout le monde");
	strcpy(src2, "Salut tout le monde");
	ft_testmemcmp(src, src2);
	printf(" \n");
	printf(" \n");
	printf("_______________TEST STRNSTR_______________  \n");
	printf(" \n");

	strcpy(src, "aaaaaaabcdef");
	strcpy(src2, "bcd");
	i = 5;
	ft_teststrnstr(src, src2, i);
	i = 12;
	ft_teststrnstr(src, src2, i);
	strcpy(src, "aaaaaaabcdef");
	strcpy(src2, "");
	i = 12;
	ft_teststrnstr(src, src2, i);
	strcpy(src, "aaaaaaf");
	strcpy(src2, "abcd");
	i = 12;
	ft_teststrnstr(src, src2, i);

	printf("_______________TEST ATOI_______________  \n");
	printf(" \n");

	strcpy(src, "");
	strcpy(src,"123");
	ft_testatoi(src);
	strcpy(src,"-123");
	ft_testatoi(src);
	strcpy(src,"1s23");
	ft_testatoi(src);
	strcpy(src,"-12s3");
	ft_testatoi(src);
	strcpy(src,"   -12f3");
	ft_testatoi(src);
	strcpy(src,"   --12f3");
	ft_testatoi(src);
	strcpy(src,"-+123");
	ft_testatoi(src);
	strcpy(src,"\t++123");
	ft_testatoi(src);
	strcpy(src,"-12s3");
	ft_testatoi(src);


	printf(" \n");
	printf(" \n");
	printf("_______________TEST FT_CALLOC_______________  \n");
	printf(" \n");


	ft_testcalloc(i, val);


	printf("_______________TEST FT_STRDUP_______________  \n");
	printf(" \n");

	char s1[20] = "salut";
	ft_teststrdup(s1); 
	strcpy(s1,"bonsoir");
	ft_teststrdup(s1); 
	strcpy(s1,"aurevoir");
	ft_teststrdup(s1); 
	strcpy(s1,"la bise");
	ft_teststrdup(s1); 

	printf(" \n");
	printf(" \n");
	printf("_______________TEST FT_STRTRIM_______________  \n");
	printf(" \n");


	strcpy(s1,"aaeaebabababeaaaa");
	strcpy(a,"ae");
	
	printf("strtrim %s\n",ft_strtrim(s1,a));
	
	
	return (0);
}
