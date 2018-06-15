#include "check_border.h"
int check_border(int x, int y)
{
	if((x<0)||(x>3)||(y<0)||(y>3)) return 0;
	else return 1;
}
