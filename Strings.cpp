#include "Strings.h"
#include <fstream>
#include "Exception.h"

Strings::Strings()
{
    alphabet = "aeiouyAEIOUY";
    std::cout << "Strings default constructor called\n";
}

Strings::~Strings()
{
    std::cout << "Strings default destructor called\n";
}

std::string Strings::getAlphabet()
{
    return alphabet;
}

void Strings::checkFile(const std::string& file)
{
    std::ifstream gin;
    gin.open(file);
    if (!gin)
        throw Exception("There is no such file in the directory!\n");
    std::string line, alp = this->getAlphabet();
    std::cout << "\nWords with a vowel letter:\n";
    while (gin >> line)
    {
        if (alp.find(line[0]) != -1)
            std::cout << line << std::endl;
    }
    std::cout << "\n";
    gin.close();
}