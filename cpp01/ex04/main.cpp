#include <iostream>
#include <string>
#include <fstream>

void str_replace(std::ifstream &ifs, std::ofstream &ofs, std::string s1, std::string s2)
{
    std::string line;
    size_t      pos;

    while (std::getline(ifs, line))
    {
        pos = line.find(s1);
        while (pos != std::string::npos)
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos = line.find(s1);
        }
        ofs << line << std::endl;
    }
}

int main(int argc, char **argv)
{
    std::ifstream   ifs;
    std::ofstream   ofs;

    if (argc != 4)
    {
        std::cout << "Invalid number of arguments" << std::endl;
        return (-1);
    }
    ifs.open(argv[1]);
    ofs.open(argv[1] + std::string(".replace"));
    if (ifs.is_open() && ofs.is_open())
    {
        str_replace(ifs, ofs, argv[2], argv[3]);
        ifs.close();
        ofs.close();
    }
    else
    {
        std::cout << "Error opening files" << std::endl;
        return (-1);
    }
    return (0);
}