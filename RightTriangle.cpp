#include<string>
#include<iostream>
#include<typeinfo>
#include<iomanip>
#include "RightTriangle.h"

/*
* constructor

* @param  two strings for the description and the name
* @param  an int for base

*/
RightTriangle::RightTriangle(int b, std::string description, std::string name) : Isosceles(b, b, description, name) {}

/*
* to display the detailed info about the shape

* @return string

*/
std::string RightTriangle::toString() const
{
	std::cout << std::fixed << std::setprecision(2);
	std::string s;
	std::cout << "Shape Information" << std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout << std::setw(15) << "Static Type:" << typeid(this).name() << std::endl;
	std::cout << std::setw(15) << "Dynamic Type:" << typeid(*this).name() << std::endl;
	std::cout << std::setw(15) << "Shape name:" << get_name() << std::endl;
	std::cout << std::setw(15) << "description:" << get_desc() << std::endl;
	std::cout << std::setw(15) << "id:" << get_id() << std::endl;
	std::cout << std::setw(15) << "B. Box width:" << get_height() << std::endl;
	std::cout << std::setw(15) << "B. Box height:" << get_base() << std::endl;
	std::cout << std::setw(15) << "Scr area:" << compute_screen_area() << std::endl;
	std::cout << std::setw(15) << "Geo area:" << compute_area() << std::endl;
	std::cout << std::setw(15) << "Scr perimeter:" << compute_screen_perimeter() << std::endl;
	std::cout << std::setw(15) << "Scr area:" << compute_perimeter() << std::endl;
	return s;
}

/*
* computr the screen area

* @return a int value of the area

*/
int RightTriangle::compute_screen_area() const
{
	int h = get_height();
	return ((h * (h + 1)) / 2);
}

/*
* computr the geometric perimeter

* @return a float value of the perimeter

*/
float RightTriangle::compute_perimeter() const
{
	return (float)((2 + sqrt(2)) * get_height());
}

/*
* computr the screen perimeter

* @return a int value of the perimeter

*/
int RightTriangle::compute_screen_perimeter() const
{
	return (3 * (get_height() - 1));
}

/*
* to fetch the height value

* @return a int value of the height

*/
int RightTriangle::getHeight() const
{
	return get_height();
}

/*
* to fetch the width value

* @return a int value of the width

*/
int RightTriangle::getWidth() const
{
	return get_base();
}

/*
* to draw the shape onto an output screen

* @param a referrence to a canvas object
* @param two ints specifying the row and the cols
* @param two chars specifying the foreground char and the background char

*/
void RightTriangle::draw(Canvas& canvas, int row, int col, char foreChar, char backChar) const
{
	for (int r = 0; r < this->getHeight(); r++)
	{
		for (int c = 0; c < this->getWidth(); c++)
		{
			if (c <= (r + 1))
				canvas[row + r][col + c] = foreChar;
			else
				canvas[row + r][col + c] = backChar;
		}
	}
}
