NAME = ex00
SRC = main.cpp WrongAnimal.cpp Animal.cpp Dog.cpp WrongCat.cpp Cat.cpp
#DBG = -g -fsanitize=address
 FLAG = -Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(SRC)
	clang++ $(DBG) $(FLAG) -o $(NAME) $(SRC)

clean:
	rm -fr $(NAME)

fclean: clean

re: clean all
