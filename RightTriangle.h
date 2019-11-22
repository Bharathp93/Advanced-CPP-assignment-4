#ifndef RIGHT_H
#define RIGHT_H
#include<string>
#include<ostream>
#include "Isosceles.h"

class RightTriangle : public Isosceles
{
public:
	RightTriangle() = default;
	RightTriangle(int b, std::string description = "Class RightTriangle", std::string name = "RightTriangle");
	~RightTriangle() = default;
	virtual std::string toString() const override;
	virtual float compute_perimeter() const override;
	virtual int compute_screen_area() const override;
	virtual int compute_screen_perimeter() const override;
	virtual void draw(Canvas& c, int row, int col, char foreChar = '*', char backChar = ' ') const override;
	int getHeight() const;
	int getWidth() const;

};
#endif