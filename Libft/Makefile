SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
HDR = libft.h
OBJS = ${SRCS:.c=.o}
FLAGS = -Wall -Wextra -Werror
GCC = gcc
NAME = libft.a

%.o : %.c
	${GCC} ${FLAGS} -c $< -o $@ ${HDR}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}	

all: ${NAME}

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f ${NAME}

re: fclean all

.PHONY: clean fclean re
