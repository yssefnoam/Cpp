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
        {
            std::cout << std::strerror(errno) << std::endl;
            return 0;
        }
        std::ofstream fout(filenamereplaced);
        std::string String;
        while (1)
        {
            std::getline(fin, String);
            int index = String.find(s1);
            if (index != -1)
            {
                String.replace(index, s1.length(), s2);
                fout << String;
            }
            else
                fout << String;
            if (fin.eof())
            {
                fin.close();
                fout.close();
                return 0;
            }
            else
                fout << std::endl;
        }
    }
    std::cout << "Error" << std::endl;
    return 1;
}