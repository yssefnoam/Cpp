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
        std::string write;
        int index;
        while (std::getline(fin, String))
        {
            while ((index = String.find(s1)) != -1)
            {
                write.append(String, 0, index);
                write.append(s2);
                String.erase(0, index + s1.length());
            }
            write.append(String, 0, String.length());
            fout << write;
            if (!fin.eof())
                fout << std::endl;
            write.clear();
        }
        return 0;
    }
    std::cout << "Error" << std::endl;
    return 1;
}