NAME = phonebook
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
SRC = main.cpp phonebook.cpp
OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
