NAME = ex02
SRC = main.cpp Base.cpp A.cpp C.cpp B.cpp
HEADERS = Base.hpp A.hpp C.hpp B.hpp
#DBG = -g -fsanitize=address
FLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(HEADERS) Makefile
	clang++ $(DBG) $(FLAG) -o $(NAME) $(SRC)

clean:
	rm -fr $(NAME)

fclean: clean

re: clean all
