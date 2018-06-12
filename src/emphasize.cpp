void emphasize(int x, int y, int (*mass)[4])
{
	char *p0;
	char *p1;
	char *p2; 
	char *p3;
	char *p4;
	char *p5;
	char *p6;
	char *p7;
	char *p8;
	char *p9;
	char *p10;
	char *p11;
	char *p12;
	char *p13;
	char *p14;
	char *p15;
	p1 = "1p.jpg";
	p2 = "2p.jpg"
	p3 = "3p.jpg"
	p4 = "4p.jpg"
	p5 = "5p.jpg"
	p6 = "6p.jpg"
	p7 = "7p.jpg"
	p8 = "8p.jpg"
	p9 = "9p.jpg"
	p10 = "10p.jpg"
	p11 = "11p.jpg"
	p12 = "12p.jpg"
	p13 = "13p.jpg"
	p14 = "14p.jpg"
	p15 = "15p.jpg"
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
