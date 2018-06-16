#include "checkw.h"
int checkw(int (*massive)[4], int (*mass)[4])
{
	for (int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(mass[i][j]!=massive[i][j]) return 0;
		}
	}
	return 1;
}
