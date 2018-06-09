using namespace std;
int main()
{
	const int massive[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
	int mass[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
	int x = 3;
	int y = 3;
	int perk = 0;
	int fl;
	int fl1;
	char *p0, *p1, *p2, *p3, *p4, *p5, *p6, *p7, *p8, *p9, *p10, *p11, *p12, *p13, *p14,
	*p15; // 0...15
	char field; // game field
	srand(time(NULL));
	initwindow(600,600);
