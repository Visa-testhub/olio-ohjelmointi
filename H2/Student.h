#pragma once
#include <string>

class Student
{
private:
    std::string name;
    int         studentNumber;
    double      average;

public:
	void		setName(std::string newName);
	void		setStudentNumber(int newStudentNumber);
	void		setAverage(double newAverage);
	std::string	getName();
	int			getStudentNumber();
	double		getAverage();
};