#include "iostream"
#include "string"
#include "fstream"

std::string    replaceAll(std::string str, std::string from, std::string to) {
    size_t i = 0;
    while ((i = str.find(from, i)) != std::string::npos)
    {
        str.replace(i, from.length(), to);
        i += from.length();
    }
    return (str);
}

int main(int ac, char **av) {
    char *filename = av[1];
    std::ifstream file;
    file.open(filename);
    std::string buffer;
    std::string toRep = av[2];
    std::string _Rep = av[3];

    if (ac != 4)
        std::cerr << "Wrong number of arguments." << std::endl;
    else {
        if (file.is_open()){
            std::string outfileName = std::string(filename) + ".replace";
            std::ofstream out(outfileName.c_str());
            while ( std::getline(file, buffer)) {
                std::string replace = replaceAll(buffer, toRep, _Rep);
                out << replace << std::endl;
            }
        }
    }
}