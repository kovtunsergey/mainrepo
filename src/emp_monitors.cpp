#include "../src/check_border.cpp"
void emp_monitors(int x, int y, int (*mass)[4])
{
	int x1;
	int y1;
	x1 = x + 1;
	y1 = y;
	if(check_border(x1, y1))
	{emphasize(x1, y1, mass)};
	x1 = x - 1; y1 = y;
}
