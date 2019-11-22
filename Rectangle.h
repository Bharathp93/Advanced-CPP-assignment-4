#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<string>
#include<ostream>
#include "Shape.h"

class Rectangle : public Shape
{
private:
	int width = 0;
	int height = 0;
	/*int shape_id;
	std::string description;
	std::string name;*/
public:
	Rectangle();
	Rectangle(int width, int height, std::string description = "Class Rectangle", std::string name = "Rectangle");
	virtual std::string toString() const override;
	virtual float compute_area() const override;
	virtual float compute_perimeter() const override;
	virtual int compute_screen_area() const override;
	virtual int compute_screen_perimeter() const override;
	virtual void draw(Canvas& c, int row, int col, char foreChar = '*', char backChar = ' ') const override;
	int getHeight() const;
	int getWidth() const;
};

#endif
