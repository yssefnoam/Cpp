NAME = ex02
SRC = main.cpp
HEADERS = 
#DBG = -g -fsanitize=address
FLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(HEADERS) Makefile
	clang++ $(DBG) $(FLAG) -o $(NAME) $(SRC)

clean:
	rm -fr $(NAME)

fclean: clean

re: clean all
