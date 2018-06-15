#include <iostream>
#include <time.h>
#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct t
{
	int mas[4];
} st;
void input_mat_fi(FILE *tf, int(*mass)[4]);
void read_mat_fi(FILE *tf, int (*mass)[4]);
bool move(int (*mass)[4],int &x, int &y);
void start_new_fi(int (*mass)[4],int &x, int &y);
bool check_border(int x, int y);
void swap(int (*mass)[4], int x, int y, int x1, int y1);
void printmass(int (*mass)[4]);
bool checkw(const int (*massive)[4], int (*mass)[4]);
void readpictures(char *field);
bool index(int x1, int y1, int x, int y);
int menu();
void emp_monitors(int x, int y, int (*mass)[4]);
void emphasize(int x, int y, int (*mass)[4]);
void outputmat(int (*mass)[4], char *p0, char *p1, char *p2, char *p3, char *p4, char *p5,
char *p6, char *p7, char *p8, char *p9, char *p10, char *p11, char *p12, char *p13,
char *p14, char *p15);
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
	*p15, *field, *win;
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
			read_mat_fi(tf,mass);
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
	//	readimagefile(field, 0, 0, 600, 600);
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
		delay(100);
		emp_monitors(x, y, mass);
		fl = move(mass, x, y);
		fl1 = checkw(massive, mass);
		while((!fl) && (!fl1))
		{
			outputmat(mass, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15);
			delay(100);
			emp_monitors(x, y, mass);
			fl = move(mass, x, y);
			fl1 = checkw(massive, mass);
		}
		if(fl) // 1;
		{
			input_mat_fi(tf, mass);
		}
		if(fl1) // 1;
		{
			win = "win.jpg";
			readimagefile(win, 0, 0, 600, 600);
			delay(3000);
		}
	}
}
void emp_monitors(int x, int y, int (*mass)[4])
{
	int x1;
	int y1;
	x1 = x + 1;
	y1 = y;
	if(check_border(x1, y1))
	{emphasize(x1, y1, mass);}
	x1 = x - 1;
	y1 = y;
	if(check_border(x1, y1))
	{emphasize(x1, y1, mass);}
	x1 = x; 
	y1 = y + 1;
	if(check_border(x1, y1))
	{emphasize(x1, y1, mass);}
	x1 = x;
	y1 = y - 1;
	if(check_border(x1, y1))
	{emphasize(x1, y1, mass);}
}
void emphasize(int x, int y, int (*mass)[4])
{
	char *p0, *p1, *p2, *p3, *p4, *p5, *p6, *p7, *p8, *p9, *p10, *p11, *p12, *p13, *p14, *p15;
	p1 = "1pp.jpg";
	p2 = "2pp.jpg";
	p3 = "3pp.jpg";
	p4 = "4pp.jpg";
	p5 = "5pp.jpg";
	p6 = "6pp.jpg";
	p7 = "7pp.jpg";
	p8 = "8pp.jpg";
	p9 = "9pp.jpg";
	p10 = "10pp.jpg";
	p11 = "11pp.jpg";
	p12 = "12pp.jpg";
	p13 = "13pp.jpg";
	p14 = "14pp.jpg";
	p15 = "15pp.jpg";
	switch(mass[x][y])
	{
		case 0: readimagefile(p0, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
		case 1: readimagefile(p1, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
		case 2: readimagefile(p2, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
		case 3: readimagefile(p3, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
		case 4: readimagefile(p4, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
		case 5: readimagefile(p5, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
		case 6: readimagefile(p6, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
		case 7: readimagefile(p7, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
		case 8: readimagefile(p8, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
		case 9: readimagefile(p9, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
		case 10: readimagefile(p10, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
		case 11: readimagefile(p11, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
		case 12: readimagefile(p12, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
		case 13: readimagefile(p13, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
		case 14: readimagefile(p14, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
		case 15: readimagefile(p15, 100 + (y * 100), 100 + (x * 100), 200 + (y * 100), 200 + (x * 100));
		break;
	}
}
int menu()
{
	char *p;
	p = "menu.jpg";
	readimagefile(p, 0, 0, 600, 600);
	int x2;
	int y2;
	while(1)
	{
		if(kbhit()) 
		{
		return 3;
		}
		if(ismouseclick(WM_LBUTTONDOWN))
		{
			getmouseclick(WM_LBUTTONDOWN, x2, y2);
			if((x2 >= 195) && (x2 <= 405)) 
			{
				if((y2 >= 130) && (y2 <= 225))
				{return 1;}
				if((y2 >= 250) && (y2 <= 330))
				{return 2;}
				if((y2 >= 355) && (y2 <= 438))
				{return 3;}
			} 
		}
	}
	return 0;
}
void readpictures(char *field)
{
	readimagefile(field, 0, 0, 600, 600);
}
void outputmat(int (*mass)[4], char *p0, char *p1, char *p2, char *p3, char *p4, char *p5,
char *p6, char *p7, char *p8, char *p9, char *p10, char *p11, char *p12, char *p13,
char *p14, char *p15)
{
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			switch(mass[i][j])
			{
				case 0: readimagefile(p0, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
				case 1: readimagefile(p1, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
				case 2: readimagefile(p2, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
				case 3: readimagefile(p3, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
				case 4: readimagefile(p4, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
				case 5: readimagefile(p5, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
				case 6: readimagefile(p6, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
				case 7: readimagefile(p7, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
				case 8: readimagefile(p8, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
				case 9: readimagefile(p9, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
				case 10: readimagefile(p10, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
				case 11: readimagefile(p11, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
				case 12: readimagefile(p12, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
				case 13: readimagefile(p13, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
				case 14: readimagefile(p14, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
				case 15: readimagefile(p15, 100 + (j * 100), 100 + (i * 100), 200 + (j * 100), 200 + (i * 100));
				break;
			}
		}
	}
}
bool index(int x1, int y1, int x, int y)
{
	if((x1 == 4) || (y1 == 4)) 
	{
		return 0;
	}
	if((((x + 1) == x1) && (y1 == y)) || (((x - 1) == x1) && (y1 == y)) || (((y + 1) == y1) &&
	(x1 == x)) || (((y - 1) == y1) && (x1 == x)))
	{
		return 1;
	}
}
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
				case 80: x1 = x + 1; y1 = y; // down
				break;
			}
			break;
		}
	if(ismouseclick(WM_LBUTTONDOWN))
	{
		getmouseclick(WM_LBUTTONDOWN, y1, x1);
		if((x1 < 25) && (y1 < 600) && (x1 > 0) && (y1 > 575)) 
		{
		return 1;
		}
		if((x1 < 90)||(y1 < 90))
		{
		continue;
	    }
		x1 = (x1 - 90) / 100;
		y1 = (y1 - 90) / 100;
		cout << x1 << " " << y1 << endl;
		if(index(x1, y1, x, y))
		{
			break;
		}
	}
	}
	system("CLS");
	if(check_border(x1, y1))
	{
		swap(mass, x, y, x1, y1);
		x = y1;
		y = y1;
	}
	return 0;
}
void start_new_fi(int (*mass)[4],int &x, int &y)
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
bool check_border(int x, int y)
{
	if((x < 0) || (x > 3) || (y < 0) || (y > 3)) 
	{
		return 0;
	}
	else return 1;
}
void swap(int (*mass)[4], int x, int y, int x1, int y1)
{
	int f;
	f = mass[x][y];
	mass[x][y] = mass[x1][y1];	
	mass[x1][y1] = f;
}
void printmass(int (*mass)[4])
{
	for (int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cout << mass[i][j] << " ";
		}
		cout << endl;
	}
}
bool checkw(const int (*massive)[4], int (*mass)[4])
{
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			if(mass[i][j] != massive[i][j]) 
			{
				return 0;
			}
		}			
	}
	return 1;
}
void input_mat_fi(FILE *tf, int(*mass)[4])
{
	tf = fopen("io.dat","wb");
	for(int i = 0; i < 4; i++)
	{
		st.mas[0] = mass[i][0];
		st.mas[1] = mass[i][1];
		st.mas[2] = mass[i][2];
		st.mas[3] = mass[i][3];
		fwrite(&st,sizeof(st),1,tf);
 	}
 	fclose(tf);
 }
void read_mat_fi(FILE *tf, int (*mass)[4])
{
	int i;
	tf = fopen("io.dat","rb");
	i = 0;
	fread(&st, sizeof(st),1,tf);
	while(!feof(tf))
	{
		mass[i][0] = st.mas[0];
		mass[i][1] = st.mas[1];
		mass[i][2] = st.mas[2];
		mass[i][3] = st.mas[3];
		fread(&st,sizeof(st),1,tf);
		i++;
	}
}

