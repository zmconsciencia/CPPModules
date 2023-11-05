#include "iostream"
#include "string"
#include "fstream"


std::string replaceAll(std::string &file, std::string &from, std::string &to) {
    if (from.empty())
        return file;
    std::string result;
    size_t startPos = 0;
    size_t pos = file.find(from);

    while (pos != std::string::npos) {
        result += file.substr(startPos, pos - startPos) + to;
        startPos = pos + from.length();
        pos = file.find(from, startPos);
    }

    result += file.substr(startPos);
    return result;
}

int main(int ac, char **av) {
    if (ac == 4) {
        std::string filename = av[1];
        std::string outfileName = filename + ".replace";
        std::string toRep = av[2];
        std::string _Rep = av[3];
        std::ifstream infile(filename.c_str());
        if (infile.is_open()) {
            std::ofstream outfile(outfileName.c_str());
            std::string buffer;
            while (getline(infile, buffer)) {
                std::string replacedLine = replaceAll(buffer, toRep, _Rep);
                outfile << replacedLine << std::endl;
            }
        }
        else {
            std::cerr << "No matching file." << std::endl;
        }
    }
    else {
        std::cerr << "Wrong number of arguments." << std::endl;
    }
}