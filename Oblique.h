#ifndef OBLIQUE_H
#define OBLIQUE_H
#include<string>
#include<ostream>
#include "Isosceles.h"

class Oblique : public Isosceles
{
public:
	Oblique() = default;
	Oblique(int b, std::string description = "Class Oblique", std::string name = "Oblique");
	~Oblique() = default;
	virtual std::string toString() const override;
	virtual float compute_perimeter() const override;
	virtual int compute_screen_area() const override;
	virtual int compute_screen_perimeter() const override;
	virtual void draw(Canvas& c, int row, int col, char foreChar = '*', char backChar = ' ') const override;
	int getHeight() const;
	int getWidth() const;

};
#endif