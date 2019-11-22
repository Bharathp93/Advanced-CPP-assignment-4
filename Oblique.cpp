#include<string>
#include<iostream>
#include<typeinfo>
#include<iomanip>
#include "Oblique.h"

/*
* constructor

* @param  two strings for the description and the name
* @param  int for base and height

*/
Oblique::Oblique(int b, std::string description, std::string name) : Isosceles(description, name)
{
	if (b % 2 == 0)
		b = b + 1;
	set_base(b);
	set_height(((b + 1) / 2));
}

/*
* to display the detailed info about the shape

* @return string 

*/
std::string Oblique::toString() const
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
	std::cout << std::setw(15) << "B. Box width:" << get_base() << std::endl;
	std::cout << std::setw(15) << "B. Box height:" << get_height() << std::endl;
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
int Oblique::compute_screen_area() const
{
	int h = get_height();
	return (h * h);
}

/*
* computr the geometric perimeter

* @return a float value of the perimeter

*/
float Oblique::compute_perimeter() const
{
	return (float)(get_base() + (2 * sqrt((0.25 * (get_base() ^ 2)) + (get_height() ^ 2))));
}

/*
* computr the screen perimeter

* @return a int value of the perimeter

*/
int Oblique::compute_screen_perimeter() const
{
	return (4 * (get_height() - 1));
}

/*
* to fetch the height value

* @return a int value of the height

*/
int Oblique::getHeight() const
{
	return get_height();
}

/*
* to fetch the width value

* @return a int value of the width

*/
int Oblique::getWidth() const
{
	return get_base();
}

/*
* to draw the shape onto an output screen

* @param a referrence to a canvas object
* @param two ints specifying the row and the cols
* @param two chars specifying the foreground char and the background char

*/
void Oblique::draw(Canvas& canvas, int row, int col, char foreChar, char backChar) const
{
	for (int r = 0; r < this->getHeight(); r++)
	{
		for (int c = 0; c < this->getWidth(); c++)
		{
			if (c <= (int)this->getWidth() / 2)
			{
				if (c < (((int)this->getWidth() / 2) - r))
					canvas[row + r][col + c] = backChar;
				else
					canvas[row + r][col + c] = foreChar;
			}
			else
			{
				if (c >(((int)this->getWidth() / 2) + r))
					canvas[row + r][col + c] = backChar;
				else
					canvas[row + r][col + c] = foreChar;
			}
		}
	}
}