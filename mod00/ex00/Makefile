NAME = megaphone
SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	clang++ -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	rm -fr $(NAME)

fclean: clean

re: clean all
