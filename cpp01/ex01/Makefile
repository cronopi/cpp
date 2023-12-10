RM = rm -f

CC = c++
FLAGS = -Wall -Wextra -Werror

NAME = horde
SRC = main.cpp Zombie.hpp Zombie.cpp zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re
