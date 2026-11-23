#include "ClassA1.h"
#include "ClassA2.h"
#include <iostream>

int main()
{
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    std::cout << "objB: " << objB.getInfo() << std::endl;
    std::cout << "objA1: " << objA1.getBinfo() << std::endl;

    ClassB& refB = objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    std::cout << "objB: " << objB.getInfo() << std::endl;
    std::cout << "objA2 " << objA2.getBinfo() << std::endl;
    std::cout << std::endl;

    // Osa 2
    int a = 5;
    int b = 6;
    int* pointerA = &a;
    int& refA = a;

    //refA = &b;
    // referenssiä ei voi reassignata.
	pointerA = &b;

    std::cout << "a:n arvo: " << a << std::endl << "a:n osoite:" << &a << std::endl << std::endl;
    std::cout << "Pointterin osoittama osoite on: " << pointerA << std::endl << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << std::endl << std::endl;
	std::cout << "refA osoittaa osoitteeseen: " << &refA << std::endl << "refA:n osoittaman muistipaikan arvo on:" << refA << std::endl;
    
    return 0;
}