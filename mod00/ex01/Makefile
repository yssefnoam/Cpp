NAME = phonebook
SRC = addContact.cpp eofReached.cpp findFreeIndex.cpp getContactIndexFromUser.cpp getInput.cpp phonebook.cpp printAvailableContact.cpp printContact.cpp printContactField.cpp printContactForSearch.cpp printPickedIndex.cpp printSpace.cpp printString.cpp setIndex.cpp getIndex.cpp PhoneBook.construct.cpp getFreeIndex.cpp
#DBG = -g -fsanitize=address


all: $(NAME)

$(NAME): $(SRC)
	clang++ $(DBG) -Wall -Wextra -Werror -std=c++98 -o $(NAME) $(SRC)

clean:
	rm -fr $(NAME)

fclean: clean

re: clean all
