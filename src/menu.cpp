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
				// return code ->>>>> main.cpp
			} 
		}
	}
	return 0;
}
