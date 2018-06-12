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
				case 9: readimagefile(p9, ..)
				break;
				case 10: readimagefile(p10, ..)
				break;
				case 11: readimagefile(p11, ..)
				break;
				case 12: readimagefile(p12, ..)
				break;
				case 13: readimagefile(p13, ..)
				break;
				case 14: readimagefile(p14, ..)
				break;
				case 15: readimagefile(p15, ..)
				break;
			}
		}
	}
}
