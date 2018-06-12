#include "../src/printmass.cpp"
bool move(int (*mass)[4],int &x, int &y)
{
	int x1 = x;
	int y1 = y;
	char click;
	printmass(mass);
	while(1)	
	{
		if(kbhit() )
		{
			click = getch();
			if(click == 27) 
			return 1;
			switch(click)
			{
				case 75: x1 = x; y1 = y - 1; // left
				break;
				case 77: x1 = x; y1 = y + 1; // right
				break; 
				case 72: x1 = x - 1; y1 = y; // up
				break;
				case 80: x1 = x + 1; y1 = y: // down
				break;
			}
			break;
		}
	if(ismouseclick(WM_LBUTTONDOWN))
	{
		getmouseclick(WM_LBUTTONDOWN, y1, x1);
		if((x1 < 25) && (y1 < 600) && (x1 > 0) && (y1 > 575)) 
		return 1;
		if((x1 < 90)||(y1 < 90))
		continue;
		x1 = (x1 - 90) / 100;
		y1 = (y1 - 90) / 100;
		cout << x1 << " " << y1 << endl;
		if()
