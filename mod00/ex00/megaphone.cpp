#include <iostream>

#define ODEFAULT "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main(int ac, char *av[])
{
	if (ac == 1)
	{
		std::cout << ODEFAULT << std::endl;
	}
	else
	{
		int i = 1;
		while(av[i])
		{
			int j = 0;
			while(av[i][j])
			{
				std::cout << (char)std::toupper(av[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
