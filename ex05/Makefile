NAME	= do-op

SRCS	= \
	src/ft_atoi.c \
	src/ft_doop.c \
	src/ft_putnbr.c \
	src/ft_putstr.c \
	src/ft_res.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I src/ft.h ${SRCS} -o do-op

clean:
	rm ${NAME}

re:	clean all