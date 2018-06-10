#include "../src/check_border.cpp"
void start_new_fi(int (*arr)[4],int &x, int &y)
{
	int x1 = x;
	int y1 = y;
	int c;
	c = rand() % 4;
	switch(c)
	{
		case 1: x1 = x; y1 = y - 1;
		break;
		case 2: x1 = x; y1 = y + 1;
		break;
		case 3: x1 = x - 1; y1 = y; 
		break;
		case 0: x1 = x + 1; y1 = y;
		break;
	}
	if(check_border(x1, y1))
	{
		swap(mass, x, y, x1, y1);
		x = x1;
		y = y1;
	}
}
