NAME = Unnecessary_violence

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC = main.cpp HumanA.cpp Weapon.cpp HumanB.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)