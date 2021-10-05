NAME = phonebook
SRC = addContact.cpp eofReached.cpp findFreeIndex.cpp getContactIndexFromUser.cpp getInput.cpp phonebook.cpp printAvailableContact.cpp printContact.cpp printContactField.cpp printContactForSearch.cpp printPickedIndex.cpp printSpace.cpp printString.cpp

#DBG = -g -fsanitize=address


all: $(NAME)

$(NAME): $(SRC)
	g++ $(DBG) -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	rm -fr $(NAME)

fclean: clean

re: clean all
