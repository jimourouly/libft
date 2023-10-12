#nom du fichier de sortie apres compilation
NAME = libft.a

#nom du compilateur
CC=gcc

#flags de compilation
CFLAGS=-Wall -Wextra -Werror

#fichiers sources
SRCS = main.c ft_isascii.c ft_isalnum.c ft_isprint.c ft_memset.c ft_strlen.c

#header
HEADERS = libft.h 


OBJS = $(SRCS:.c=.o)

all: $(OBJS) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Pour executer le clean, make clean
clean:
	rm -f $(OBJS) $(NAME)

#Full Clean
fclean: clean
	rm -f $(NAME)

