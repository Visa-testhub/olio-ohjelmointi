#include "ClassB.h"
#include <string>

class ClassA1
{
private:
    ClassB objectB;
public:
    ClassA1(ClassB); //Luodaan kopio ClassB-luokan oliosta
    std::string getBinfo();
    void setBinfo(std::string);
};