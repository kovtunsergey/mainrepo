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
