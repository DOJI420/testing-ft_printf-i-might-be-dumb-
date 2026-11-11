NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c /
          ft_strlen.c /
          ft_putnbr.c /
          ft_format.c /
          ft_puthexadec.c /
          ft_putstr.c 

OBJS = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
        ar rcs ${NAME} ${OBJS}

%.o: %.c ft_printf.h
        ${CC} ${CFLAGS} -c $< -o $@

clean:
        rm -rf ${OBJS}

fclean: clean
        rm -rf ${NAME}

re: fclean all

.PHONY: all fclean clean re