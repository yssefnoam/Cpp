NAME = a.out
SRC = main.cpp
#DBG = -g -fsanitize=address
# FLAG= -Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(SRC)
	clang++ $(DBG) $(FLAG) -o $(NAME) $(SRC)

clean:
	rm -fr $(NAME)

fclean: clean

re: clean all
