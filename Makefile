# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: angela <angela@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 08:49:25 by jroulet           #+#    #+#              #
#    Updated: 2025/02/27 19:22:14 by angela           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#nom du fichier de sortie apres compilation
NAME = libft.a

#nom du compilateur
CC=gcc

# library a ajouter (ubuntu)
#LIBS = -lbsd

#flags de compilation
CFLAGS= -Wall -Wextra -Werror -g

#MAIN = main.c

#fichiers sources
SRCS = ft_atoi.c\
	   ft_atoli.c\
	   ft_bzero.c\
	   ft_calloc.c\
	   ft_isalnum.c\
	   ft_isalpha.c\
	   ft_isdigit.c\
	   ft_isalpha.c\
	   ft_isalpha.c\
	   ft_isprint.c\
	   ft_itoa.c\
	   ft_lstadd_back.c\
	   ft_lstadd_front.c\
	   ft_lstclear.c\
	   ft_lstlast.c\
	   ft_lstnew.c\
	   ft_lstsize.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_memcpy.c\
	   ft_memmove.c\
	   ft_memset.c\
	   ft_print_char.c\
	   ft_print_hex.c\
	   ft_print_nbr.c\
	   ft_print_percent.c\
	   ft_print_ptr.c\
	   ft_print_str.c\
	   ft_print_uns.c\
	   ft_printf.c\
	   ft_putchar_fd.c\
	   ft_putendl_fd.c\
	   ft_putnbr_fd.c\
	   ft_putstr_fd.c\
	   ft_split.c\
	   ft_strcat.c\
	   ft_strchr.c\
	   ft_strcmp.c\
	   ft_strdup.c\
	   ft_striteri.c\
	   ft_strjoin.c\
	   ft_strlcat.c\
	   ft_strlcpy.c\
	   ft_strlen.c\
	   ft_strmapi.c\
	   ft_strncmp.c\
	   ft_strstr.c\
	   ft_strnstr.c\
	   ft_strrchr.c\
	   ft_strtrim.c\
	   ft_substr.c\
	   ft_tolower.c\
	   ft_toupper.c\
	   ft_uitoa.c\
	   ft_strcpy.c\
	   ft_log.c\
	   ft_pow.c\
	   ft_inttobin.c\
	   ft_free_char_tab.c\
	   ft_c_in_s.c\
	   ft_strncpy.c\
	   ft_get_next_line.c\
	   ft_isonstr.c\
	   ft_get_next_line_utils.c\
	   ft_lstdelone.c\
	   ft_lstiter.c\
	   ft_lstmap.c

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

git: clean
	git add *
	git commit -m "$t" -m "$b"
	git push

$(NAME):  $(OBJS)
	ar rcs $(NAME) $(OBJS)

#compile : all
#	$(CC) $(CFLAGS) $(MAIN) $(NAME) $(OBJS) #$(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Pour executer le clean, make clean
clean:
	rm -f $(OBJS)

#Full Clean
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus git
