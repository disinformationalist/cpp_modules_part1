#include <iostream>
#include <cctype> //toupper

int main(int ac, char **av)
{
	int i, j;

	if (ac >= 2)
	{
		i = 0;
		while (av[++i])
		{
			j = -1;
			while (av[i][++j])
				std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(av[i][j])));
			if (av[i + 1])
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}