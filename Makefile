NAME	= libftprintf.a

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_printf.c ft_printf_utils.c \
			ft_putbase.c

OBJS	= ${SRCS:.c=.o}

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re : fclean all
