#include "ClassB.h"
#include <string.h>

class ClassA2
{
private:
    ClassB& refB;
public:
    ClassA2(ClassB&); //Annetaan argumenttina B-luokan olion osoite
    std::string getBinfo();
    void setBinfo(std::string);
};