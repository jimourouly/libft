# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 08:49:25 by jroulet           #+#    #+#              #
#    Updated: 2023/10/14 16:47:08 by jroulet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#nom du fichier de sortie apres compilation
NAME = libft.a

#nom du compilateur
CC=gcc

# library a ajouter (ubuntu)
LIBS = -lbsd

#flags de compilation
CFLAGS=-Wall -Wextra -Werror

#fichiers sources
SRCS = main.c ft_isascii.c ft_isalnum.c ft_isprint.c ft_memset.c ft_strlen.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c
#header
HEADERS = libft.h 


OBJS = $(SRCS:.c=.o)

all: $(OBJS) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Pour executer le clean, make clean
clean:
	rm -f $(OBJS) $(NAME)

#Full Clean
fclean: clean
	rm -f $(NAME)
