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
		return 3;
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
