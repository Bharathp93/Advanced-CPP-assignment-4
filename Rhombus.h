#ifndef RHOMBUS_H
#define RHOMBUS_H
#include<string>
#include<ostream>
#include "Shape.h"

class Rhombus : public Shape
{
private:
	int d = 0;
public:
	Rhombus();
	Rhombus(int d, std::string description = "Class Rhombus", std::string name = "Rhombus");
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
