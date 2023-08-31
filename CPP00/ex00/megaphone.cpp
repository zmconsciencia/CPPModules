#include <iostream>

char	*megaphone(char *av)
{
	int i = -1;

	while (av[++i] != '\0')
	{
		if (av[i] >= 'a' && av[i] <= 'z')
			av[i] -= 32;
	}
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