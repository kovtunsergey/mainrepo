void swap(int (*mass)[4], int x, int y, int x1, int y1)
{
	int f;
	f = mass[x][y];
	mass[x][y] = mass[x1][y1];	
	mass[x1][y1] = f;
}
