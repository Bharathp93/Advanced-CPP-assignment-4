#ifndef ISOSCELES_H
#define ISOSCELES_H
#include<string>
#include<ostream>
#include "Shape.h"

class Isosceles : public Shape
{
private:
	int base = 0;
	int height = 0;

public:
	Isosceles() = default;
	Isosceles(std::string description, std::string name);
	Isosceles(int base, int height, std::string description, std::string name);
	~Isosceles() = default;
	virtual std::string toString() const = 0;
	virtual float compute_area() const  override;
	virtual float compute_perimeter() const = 0;
	virtual int compute_screen_area() const = 0;
	virtual int compute_screen_perimeter() const = 0;
	int get_base() const;
	int get_height() const;
	void set_base(int);
	void set_height(int);

};
#endif