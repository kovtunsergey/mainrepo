#define CTEST_MAIN
#include <ctest.h> //test
#include <stdio.h>
#include <stdlib.h>
//#include "../src/checkw.h"
//#include "../src/checkw.c"
//#include "../thirdparty/ctest.h"
//#include "../src/check_border.h"
//#include "../src/check_border.c"
//#include "../src/index.h"
//#include "../src/index.c"
CTEST(win,Correct) {
	int massive[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
	int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
	int real = checkw(massive,arr);
	int exp = 1;
	ASSERT_EQUAL(exp,real);
}
CTEST(win,Incorrect) {
	int massive[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
	int arr1[4][4] = {{5,6,7,8},{1,2,3,4},{9,10,11,12},{13,14,15,0}};
	int real = checkw(massive,arr1);
	int exp = 1;
	ASSERT_EQUAL(exp,real);
}
CTEST(game_run,Correct) {
	int massive[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
	int arr2[4][4] = {{5,6,7,8},{13,14,15,0},{1,2,3,4},{9,10,11,12}};
	int real = checkw(massive,arr2);
	int exp = 0;
	ASSERT_EQUAL(exp,real);	
}
CTEST(game_run,Incorrect) {
	int massive[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
	int arr3[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
	int real = checkw(massive,arr3);
	int exp = 0;
	ASSERT_EQUAL(exp,real);
}
CTEST(exit_border,Correct) {
	int x1 = 4;
	int y1 = 4;
	int real = check_border(x1, y1);
	int exp = 0;
	ASSERT_EQUAL(exp,real);
}
CTEST(exit_border,Incorrect) {
	int x1 = 0;
	int y1 = 3;
	int real = check_border(x1, y1);
	int exp = 0;
	ASSERT_EQUAL(exp,real);
}
CTEST(within_border,Correct) {
	int x1 = 2;
	int y1 = 2;
	int real = check_border(x1, y1);
	int exp = 1;
	ASSERT_EQUAL(exp,real);
}
CTEST(within_border,Incorrect) {
	int x1 = 4;
	int y1 = 4;
	int real = check_border(x1, y1);
	int exp = 1;
	ASSERT_EQUAL(exp,real);
}
CTEST(converted_coordinat,Correct) {
	int x1 = 2;
	int y1 = 2;
	int x = 1;
	int y = 1;
	int real = index_te(x1, y1, x, y);
	int exp = 0;
	ASSERT_EQUAL(exp,real);
}
CTEST(converted_coordinat,Incorrect) {
	int x1 = 3;
	int y1 = 2;
	int x = 2;
	int y = 2;
	int real = index_te(x1, y1, x, y);
	int exp = 0;
	ASSERT_EQUAL(exp,real);
}
CTEST(unconverted_coordinat,Correct) {
	int x1 = 3;
	int y1 = 2;
	int x = 2;
	int y = 2;
	int real = index_te(x1, y1, x, y);
	int exp = 1;
	ASSERT_EQUAL(exp,real);
}
CTEST(unconverted_coordinat,Incorrect) {
	int x1 = 2;
	int y1 = 2;
	int x = 2;
	int y = 2;
	int real = index_te(x1, y1, x, y);
	int exp = 1;
	ASSERT_EQUAL(exp,real);
}
int main(int argc, const char** argv) {
	return ctest_main(argc,argv);
}

