NAME = bsq
SRCS = main.c read_board.c
OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror
CLEAN = rm -f
CC = cc

all:	$(OBJ)
	$(CC) $(FLAGS) -o $(NAME)
clean:
	$(CLEAN) $(NAME)
fclean:	clean
	$(CLEAN) $(OBJ)