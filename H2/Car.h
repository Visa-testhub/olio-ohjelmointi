#pragma once
#include <string>

class Car
{
private:
    std::string brand;
    std::string model;
    int yearModel = 0;

public:
    void printData() const;
    void setBrand(std::string brand);
    void setModel(std::string model);
    void setYearModel(int year);
};