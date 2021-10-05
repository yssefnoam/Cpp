#ifndef FUNCTIONS_H
# define FUNCTIONS_H

#include <iostream>
#include <iomanip>
#include "phonebook.class.hpp"

// max contact that the programme can handel
# define MAX_CONTACT	8

// Contact Field
# define MAX_CONTACT_FIELD	5
# define FIRSTNAME		0
# define LASTNAME		1
# define NICKNAME		2
# define PHONENUMBER	3
# define DARKESTSECRET	4

int findFreeIndex(PhoneBook&);
int getContactIndexFromUser(void);
std::string getInput(std::string);
void addContact(PhoneBook&);
void eofReached(void);
void printAvailableContact(PhoneBook&);
void printContact(struct Contact);
void printContactField(std::string);
void printContactForSearch(int index, struct Contact);
void printPickedIndex(PhoneBook&);
void printSpace(void);
void printString(std::string, bool);

#endif
