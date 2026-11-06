#include <iostream>
#include <memory>
#include "Student.h"
#include "Rectangle.h"
#include "Car.h"


int main()
{
	Car car;
	car.setBrand("Bolvo");
	car.setModel("V79");
	car.setYearModel(1990);
	car.printData();

	Rectangle* rect = new Rectangle;
	rect->setHeight(18);
	rect->setWidth(12);
	std::cout << "Rectangle area: " << rect->getArea() << std::endl;
	std::cout << "Rectangle circumference: " << rect->getCircum() << std::endl;

	std::unique_ptr<Student> student = std::make_unique<Student>();
	student->setName("Vakavanha Vainamoinen");
	student->setStudentNumber(100001);
	student->setAverage(5.0);
	std::cout << "Student Name: " << student->getName() << std::endl;
	std::cout << "Student Number: " << student->getStudentNumber() << std::endl;
	std::cout << "Student Average: " << student->getAverage() << std::endl;
	return 0;
}