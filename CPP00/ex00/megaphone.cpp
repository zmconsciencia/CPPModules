#include <iostream>

char	*megaphone(char *av)
{
	for (int i = 0; av[i] != '\0'; i++)
		av[i] = toupper(av[i]);
	return (av);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (++i < ac)
			std::cout << megaphone(av[i]);
	std::cout<<std::endl;
}