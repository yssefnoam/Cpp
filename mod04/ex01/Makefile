NAME = ex01
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
# DBG = -g -fsanitize=address


all: $(NAME)

$(NAME): $(SRC)
	clang++ $(DBG) -Wall -Wextra -Werror -std=c++98 -o $(NAME) $(SRC)

clean:
	rm -fr $(NAME)
	rm -fr $(NAME).dSYM

fclean: clean

re: clean all
