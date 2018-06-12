#include "../src/readpictures.cpp"
#include "../src/menu.cpp"
#include "../src/start_new_fi.cpp"
#include "../src/m_outfile"
using namespace std;

int main()
{
	const int massive[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
	int mass[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
	FILE *tf;
	int x = 3;
	int y = 3;
	int perk = 0;
	int fl;
	int fl1;
	int choice;
	char *p0, *p1, *p2, *p3, *p4, *p5, *p6, *p7, *p8, *p9, *p10, *p11, *p12, *p13, *p14,
	*p15
	char *field;
	p0 = "0p.jpg";
	p1 = "1p.jpg";
	p2 = "2p.jpg";
	p3 = "3p.jpg";
	p4 = "4p.jpg";
	p5 = "5p.jpg";
	p6 = "6p.jpg";
	p7 = "7p.jpg";
	p8 = "8p.jpg";
	p9 = "9p.jpg";
	p10 = "10p.jpg";
	p11 = "11p.jpg";
	p12 = "12p.jpg";
	p13 = "13p.jpg";
	p14 = "14p.jpg";
	p15 = "15p.jpg"; 
	field = "a.jpg";
	srand(time(NULL));
	initwindow(600,600);
	while(1)
	{
		choice = menu();
		if(choice == 1)
		{
			m_outfile(tf,mass);
		}
		if(choice == 2)
		for(int i = 0; i < 1000; i++)
		{
			start_new_fi(mass, x, y);
		} 
		if(choice == 3) 
		{
			return 0;
		}
		readpictures(field);
		outputmat(mass, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15);
		for(int i = 0; i < 4; i++)
		{
			for(int j = 0; j < 4; j++)
			{
				if(mass[i][j] == 0)
				{
					x = i; y = j;
				}
			}
		}
		delay(50);
		emp_monitors(x, y, mass);
		fl = move(mass, x, y);
		fl1 = checkw(massive, mass);
		
	}
