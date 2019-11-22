#include<iostream>
#include<typeinfo>
#include "Canvas.h"

/*
* constructor

* @param  two ints for rows and cols and a shar for the fill character

*/
Canvas::Canvas(int rows, int cols, char fillCh)
{
	row = rows;
	col = cols;
	surface.resize(rows, std::vector<char>(cols, fillCh));
}

/*
* operator [] overloading function

* @param a int to the value of the row to return

*/
std::vector<char>& Canvas::operator[](int i)
{
	return surface[i];
}

/*
* operator [] overloading (const) function

* @param a int to the value of the row to return

*/
const std::vector<char>& Canvas::operator[](int i) const
{
	return surface[i];
}

/*
* to place a character in a specific row and column

* @param two ints specifying a row and a cols
* @param a char that has to be inserted

*/
void Canvas::put(int r, int c, char ch)
{
	if (!inBounds(r, c))
		throw std::out_of_range("out of Range");
	else
		surface[r - 1][c - 1] = ch;
}

/*
* to fetch the height of the canvas

* @return an int value of the canvas height

*/
int Canvas::getHeight() const
{
	return row;
}

/*
* to fetch the width of the canvas

* @return an int value of the canvas width

*/
int Canvas::getWidth() const
{
	return col;
}

/*
* to check if the rows and cols are in bound

* @param two ints specifying the row and col values 

* @return a bool value if inbound or not

*/
bool Canvas::inBounds(int r, int c) const
{
	if (r < 0 || r > row)
	{
		if (c < 0 || c > col)
			return false;
	}
	return true;
}

/*
* to clear the sreen and inseret a specific char into the screen

* @param char to be inserted

*/
void Canvas::clear(char ch)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			surface[i][j] = ch;
}

/*
* output operator overloading

*@param a referrence to ostream object, and to a canvas object

*@return a referrence to ostream object
*/
std::ostream& operator << (std::ostream& out, const Canvas& c)
{
	for (int i = 0; i < c.row; i++)
	{
		for (int j = 0; j < c.col; j++)
			out << c.surface[i][j];
		out << std::endl;
	}
	return out;
}
