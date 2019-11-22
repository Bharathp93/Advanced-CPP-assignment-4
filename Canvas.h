#ifndef CANVAS_H
#define CANVAS_H
#include<string>
#include<ostream>
#include<vector>

class Canvas
{
private:
	std::vector<std::vector<char>> surface;
	int row = 0;
	int col = 0;
public:
	Canvas(int rows, int cols, char fillCh = ' ');
	std::vector<char>& operator[](int);
	const std::vector<char>& operator[](int) const;
	void put(int r, int c, char ch = '*');
	int getHeight() const;
	int getWidth() const;
	bool inBounds(int, int) const;
	void clear(char ch = ' ');
	friend std::ostream& operator << (std::ostream&, const Canvas&);

};
#endif