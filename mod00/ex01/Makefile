NAME = phonebook
SRC = *.cpp
#DBG = -g -fsanitize=address


all: $(NAME)

$(NAME): $(SRC)
	g++ $(DBG) -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	rm -fr $(NAME)

fclean: clean

re: clean all
