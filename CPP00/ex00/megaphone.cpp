#include <iostream>
#include <string>

std::string megaphone(char *av)
{
	std::string str = av;
	for (int i = 0; str[i] != '\0'; i++)
		str[i] = toupper(str[i]);
	return (str);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (++i < ac)
			std::cout << megaphone(av[i]) << ' ';
	std::cout<<std::endl;
}