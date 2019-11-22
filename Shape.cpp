#include<string>
#include<iostream>
#include "Shape.h"

/*
* constructor

* @param  two strings for the description and the name

*/
Shape::Shape(std::string description, std::string name)
{
	shape_num++;
	shape_id = shape_num;
	this->description = description;
	this->name = name;
}

/*
* to get shape id

* @return a integer of the shape id
*/
int Shape::get_id()const
{
	return shape_id;
}

/*
* to get shape name

* @return a string of the shape name
*/
std::string Shape::get_name() const
{
	return name;
}

/*
* to get shape description

* @return a string of the shape description
*/
std::string Shape::get_desc() const
{
	return description;
}

/*
* to set shape name

*@param string specifying the name to be set

*/
void Shape::set_name(std::string name)
{
	this->name = name;
}

/*
* to set shape description

*@param string specifying the description to be set

*/
void Shape::set_desc(std::string description)
{
	this->description = description;
}

/*
* output operator overloading

*@param a referrence to ostream object, and to a shape object

*@return a referrence to ostream object
*/
std::ostream& operator << (std::ostream& out, const Shape& s)
{
	s.toString();
	return out;
}