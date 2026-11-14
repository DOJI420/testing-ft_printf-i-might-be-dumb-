NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
        ft_format.c \
        ft_print_nbr.c \
        ft_print_ptr.c \
        ft_print_str.c \
        ft_processing.c \
        ft_print_char.c \
        ft_print_hexa.c \
        ft_print_unsigned.c

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

.PHONY: all clean fclean re
