#include <iostream>

int passed = 0;
int tests = 0;

bool check_border(int x, int y)
{
	tests++;
	
	if((x < 0) || (x > 3) || (y < 0) || (y > 3)) 
	{
		passed++;
		std::cout <<"Succses"<<'\n';
		return 0;
		
	}
	else std::cout <<"start else";
	return 1;
}

int main()
{
	using namespace std;
	
	check_border(-5,-2);
	check_border(4,4);
	check_border(-5,2);
	check_border(4,-4);
	
	check_border(3,3);
	
	cout<<"\ntests and passed out of \n"<<tests<<'\n'<<passed;
    
    
	return 0;
}
