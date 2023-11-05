#include "Harl.hpp"

int getLevel(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    for (i = 0; i < 4; i++) {
        if (!levels[i].compare(level))
            return (i);
    }
    return (i);
}

void    harlFilter(std::string level, Harl &harl) {
    int i = getLevel(level);
    while (i < 5) {
        switch (i)
        {
            case 0:
                harl.complain("DEBUG");
                break ;
            case 1:
                harl.complain("INFO");
                break;
            case 2:
                harl.complain("WARNING");
                break;
            case 3:
                harl.complain("ERROR");
                return ;
            default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        }
        i++;
    }
}

int main(int ac, char **av) {
    Harl harl;
    std::string level = av[1];

    if (ac == 2) {
        harlFilter(level, harl);
    }
    else
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}