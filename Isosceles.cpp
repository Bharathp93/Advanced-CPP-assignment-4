#include<string>
#include<iostream>
#include<typeinfo>
#include "Isosceles.h"

/*
* constructor

* @param  two strings for the description and the name

*/
Isosceles::Isosceles(std::string description, std::string name) : Shape(description, name) {}

/*
* constructor

* @param  two strings for the description and the name
* @param  two integers for base and height

*/
Isosceles::Isosceles(int base, int height, std::string description, std::string name) : Shape(description, name), base{ base }, height{ height } {}


/*
* computr the geomatric area

* @return a float value of the area

*/
float Isosceles::compute_area() const
{
	return (float)((height * base) / 2);
}

/*
* to fetch the base value

* @return a int value of the base size

*/
int Isosceles::get_base() const
{
	return base;
}

/*
* to fetch the height value

* @return a int value of the height

*/
int Isosceles::get_height() const
{
	return height;
}

/*
* to set the base value

* @param to specify the the base size to set

*/
void Isosceles::set_base(int i)
{
	this->base = i;
}

/*
* to set the height value

* @param to specify the the height to set

*/
void Isosceles::set_height(int i)
{
	this->height = i;
}