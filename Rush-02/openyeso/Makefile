NAME = program_exec
SRCS = program.c
OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror
CLEAN = rm -f
CC = cc

all:    $(OBJ)
        $(CC) $(FLAGS) -o $(NAME) $(OBJ)
clean:
        $(CLEAN) $(NAME)
fclean:    clean
        $(CLEAN) $(OBJ)
norma:
        norminette