#pragma once

class Rectangle
{
private:
    double width;
    double height;

public:

    double  getArea() const;
    double  getCircum() const;
	void    setWidth(double newWidth);
	void    setHeight(double newHeight);
};