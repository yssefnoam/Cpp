#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        std::string filename = argv[1];
        std::string filenamereplaced = filename;
        filenamereplaced.append(".replace");
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        if (filename.empty() || s1.empty() || s2.empty())
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
        std::ifstream fin(filename);
        if (fin.fail())
            std::cout << "Error" << std::endl;

        return 0;
    }
    std::cout << "Error" << std::endl;
    return 1;
}