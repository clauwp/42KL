SRCS = ${S_DIR}ft_putchar.c ${S_DIR}ft_swap.c ${S_DIR}ft_putstr.c ${S_DIR}ft_strlen.c ${S_DIR}ft_strcmp.c
H_DIR = -I includes/
S_DIR = srcs/
OBJS = ${SRCS:.c=.o}
FLAGS = -Wall -Wextra -Werror
GCC = gcc
NAME = libft.a

%.o : %.c
	${GCC} ${FLAGS} -c $< -o $@ ${H_DIR}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}	

all: ${NAME}

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f ${NAME}

re: fclean all

.PHONY: clean ftclean re
