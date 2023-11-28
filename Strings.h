#ifndef TP_2LABA_STRINGS_H
#define TP_2LABA_STRINGS_H
#include <iostream>

class Strings
{
private:
    std::string alphabet;
public:
    Strings();
    ~Strings();
    void checkFile(const std::string& file);
    std::string getAlphabet();
};


#endif //TP_2LABA_STRINGS_H
