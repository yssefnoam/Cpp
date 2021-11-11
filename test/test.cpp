#include <iostream>
#include <stdexcept>

const char *ft_function(void)
{
	std::string s("hello world.");

	return s.c_str();
}

int main(void)
{
	const char *str;
	str = ft_function();
	std::cout << str << std::endl;
	return (0);
}