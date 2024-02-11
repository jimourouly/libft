# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 08:49:25 by jroulet           #+#    #+#              #
#    Updated: 2024/02/10 19:08:31 by jroulet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#nom du fichier de sortie apres compilation
NAME = libft.a

#nom du compilateur
CC=gcc

# library a ajouter (ubuntu)
#LIBS = -lbsd

#flags de compilation
CFLAGS= -Wall -Wextra -Werror

MAIN = main.c

#fichiers sources
SRCS = $(wildcard *.c)

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
