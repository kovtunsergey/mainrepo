bool index(int x1, int y1, int x, int y)
{
	if((x1 == 4) || y1 == 4)) 
	{
		return 0;
	}
	if((((x + 1) == x1) && (y1 == y)) || (((x - 1) == x1) && (y1 == y)) || (((y + 1) == y1) &&
	x1 == x)) || (((y - 1) == y1) && (x1 == x)))
	{
		return 1;
	}
}
