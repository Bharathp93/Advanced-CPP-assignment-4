#include<string>
#include<iostream>
#include<typeinfo>
#include<iomanip>
#include "Rectangle.h"

/*
* constructor

*/
Rectangle::Rectangle() : Shape("Class Rectangle", "Rectangle") {}

/*
* constructor

* @param  two strings for the description and the name
* @param  two integers for width and height

*/
Rectangle::Rectangle(int width, int height, std::string description, std::string name) : Shape(description, name), width{ width }, height{ height } {}

/*
* to display the detailed info about the shape

* @return string

*/
std::string Rectangle::toString() const
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
	std::cout << std::setw(15) << "B. Box width:" << this->width << std::endl;
	std::cout << std::setw(15) << "B. Box height:" << this->height << std::endl;
	std::cout << std::setw(15) << "Scr area:" << compute_screen_area() << std::endl;
	std::cout << std::setw(15) << "Geo area:" << compute_area() << std::endl;
	std::cout << std::setw(15) << "Scr perimeter:" << compute_screen_perimeter() << std::endl;
	std::cout << std::setw(15) << "Scr area:" << compute_perimeter() << std::endl;
	return s;
}

/*
* computr the geomatric area

* @return a float value of the area

*/
float Rectangle::compute_area() const
{
	return (float)(height * width);
}

/*
* computr the screen area

* @return a int value of the area

*/
int Rectangle::compute_screen_area() const
{
	return (height * width);
}

/*
* computr the geometric perimeter

* @return a float value of the perimeter

*/
float Rectangle::compute_perimeter() const
{
	return (float)(2 * (height + width));
}

/*
* computr the screen perimeter

* @return a int value of the perimeter

*/
int Rectangle::compute_screen_perimeter() const
{
	return ((2 * (height + width)) - 4);
}

/*
* to fetch the height value

* @return a int value of the height

*/
int Rectangle::getHeight() const
{
	return this->height;
}

/*
* to fetch the width value

* @return a int value of the width

*/
int Rectangle::getWidth() const
{
	return this->width;
}

/*
* to draw the shape onto an output screen

* @param a referrence to a canvas object
* @param two ints specifying the row and the cols
* @param two chars specifying the foreground char and the background char

*/
void Rectangle::draw(Canvas& d, int row, int col, char foreChar, char backChar) const
{
	for (int r = 0; r < this->getHeight(); r++)
	{
		for (int c = 0; c < this->getWidth(); c++)
		{
			d[row + r][col + c] = foreChar;
		}
	}
}