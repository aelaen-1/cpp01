NAME = prog
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	Zombie.cpp \
	newZombie.cpp \
	randomChump.cpp

OBJ = ${SRC:.c=.o}

all: $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: clean fclean all re