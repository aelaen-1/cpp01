NAME = prog
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
        Weapon.cpp \
	HumanA.cpp \
	HumanB.cpp

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

debug: CPPFLAGS += -g
debug: all

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