SRCS = do_op.c ft_putnbr.c ft_atoi.c op_func.c
OBJS = ${SRCS:.c=.o}
CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = do-op

%.o : %.c
	${CC} ${FLAGS} -c $< -o $@

${NAME} : ${OBJS}
	${CC} ${FLAGS} ${SRCS} -o ${NAME}

all : ${NAME}

clean :
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re : fclean all
