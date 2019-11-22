#ifndef SHAPE_H
#define SHAPE_H
#include<string>
#include<ostream>
#include "Canvas.h"

static int shape_num = 0;

class Shape
{
private:
	int shape_id;
	std::string description;
	std::string name;
public:
	Shape() = default;
	Shape(std::string description, std::string name);
	~Shape() = default;
	int get_id()const;
	std::string get_name() const;
	std::string get_desc() const;
	void set_name(std::string name);
	void set_desc(std::string description);
	virtual std::string toString() const = 0;//print out the shape information
	virtual float compute_area() const = 0;
	virtual float compute_perimeter() const = 0;
	virtual int compute_screen_area() const = 0;
	virtual int compute_screen_perimeter() const = 0;
	virtual void draw(Canvas& c, int row, int col, char foreChar = '*', char backChar = ' ') const = 0;//draw textual image on CANVAS
																									   //virtual int getHeight() = 0;
																									   //virtual int getWidth() = 0;
	friend std::ostream& operator<<(std::ostream&, const Shape&);
};
/*inline Shape::Shape()
{
shape_num++;
shape_id = shape_num;
};*/
#endif