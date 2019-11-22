#include<string>
#include<iostream>
#include<typeinfo>
#include<iomanip>
#include "Rhombus.h"

/*
* constructor

*/
Rhombus::Rhombus() : Shape("Class Rhombus", "Rhombus") {}

/*
* constructor

* @param  two strings for the description and the name
* @param  an int for the length
*/
Rhombus::Rhombus(int d, std::string description, std::string name) : Shape(description, name)
{
	if (d % 2 == 0)
		this->d = d + 1;
	else
		this->d = d;
}

/*
* to display the detailed info about the shape

* @return string

*/
std::string Rhombus::toString() const
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
	std::cout << std::setw(15) << "B. Box width:" << this->d << std::endl;
	std::cout << std::setw(15) << "B. Box height:" << this->d << std::endl;
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
float Rhombus::compute_area() const
{
	return (float)((d * d) / 2);
}

/*
* computr the screen area

* @return a int value of the area

*/
int Rhombus::compute_screen_area() const
{
	int n = d / 2;
	return ((2 * n * (n + 1)) + 1);
}

/*
* computr the geometric perimeter

* @return a float value of the perimeter

*/
float Rhombus::compute_perimeter() const
{
	return (float)(2 * sqrt(2) * d);
}

/*
* computr the screen perimeter

* @return a int value of the perimeter

*/
int Rhombus::compute_screen_perimeter() const
{
	return (2 * (d - 1));
}

/*
* to fetch the height value

* @return a int value of the height

*/
int Rhombus::getHeight() const
{
	return this->d;
}

/*
* to fetch the width value

* @return a int value of the width

*/
int Rhombus::getWidth() const
{
	return this->d;
}

/*
* to draw the shape onto an output screen

* @param a referrence to a canvas object
* @param two ints specifying the row and the cols
* @param two chars specifying the foreground char and the background char

*/
void Rhombus::draw(Canvas& canvas, int row, int col, char foreChar, char backChar) const
{
	int i = ((int)this->getHeight() / 2) - 1;
	for (int r = 0; r < this->getHeight(); r++)
	{
		if (r <= (int)this->getHeight() / 2)
		{
			for (int c = 0; c < this->getWidth(); c++)
			{
				if (c <= (int)this->getWidth() / 2)
				{
					if (c < (((int)this->getHeight() / 2) - r))
						canvas[row + r][col + c] = backChar;
					else
						canvas[row + r][col + c] = foreChar;
				}
				else
				{
					if (c >(((int)this->getHeight() / 2) + r))
						canvas[row + r][col + c] = backChar;
					else
						canvas[row + r][col + c] = foreChar;
				}

				/*if (c < (((int)this->getHeight() / 2) - r) || c > ((((int)this->getHeight() / 2) - r) + (2 ^ r)))
				canvas[row + r][col + c] = backChar;
				else
				canvas[row + r][col + c] = foreChar;*/
			}
		}
		else
		{
			for (int c = 0; c < this->getWidth(); c++)
			{
				if (c <= (int)this->getWidth() / 2)
				{
					if (c < (((int)this->getHeight() / 2) - i))
						canvas[row + r][col + c] = backChar;
					else
						canvas[row + r][col + c] = foreChar;
				}
				else
				{
					if (c >(((int)this->getHeight() / 2) + i))
						canvas[row + r][col + c] = backChar;
					else
						canvas[row + r][col + c] = foreChar;
				}
				/*if (c < (((int)this->getHeight() / 2) - i) || c >((((int)this->getHeight() / 2) - i) + (2 ^ i)))
				canvas[row + r][col + c] = backChar;
				else
				canvas[row + r][col + c] = foreChar;*/
			}
			i--;
		}
	}
}

