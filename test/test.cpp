#include <iostream>

bool check_border(int x, int y)
{
	

	if((x < 0) || (x > 3) || (y < 0) || (y > 3)) 
	{
		
		return 0;
		
	}
	else
	
	return 1;
}

bool checkw(const int (*massive)[4], int (*mass)[4])
{
	

	for(int i = 0; i < 4; i++)
	{
		for(int j =0 ;j<4;j++)
		{
			if(mass[i][j] != massive[i][j]) { 
			return 0; }
		}
	}
	return 1;
}


int ASSERT(int x, int y)
{
	if(x = y) return 1;
	else x != y; return 2;
}

int ASSERT_C(int x, int y)
{
	if(x = y) return 1;
	else x != y; return 0;
}

int main()
{
	setlocale(LC_ALL,"Russian");
	using namespace std;
	
	const int massive[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
	int mass[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
	
	const int arrive[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
	int arr[4][4] = {{1,2,3,4},{5,6,7,8},{13,14,15,0},{9,10,11,12}};
	
	int expected = 1; // ожидаемый
int expected2 = 0; // ожидаемый
	int fact = 0;
	cout << "\t\t\tПроверка функции check_board: " << endl << "\t\t\t2 ожидаемых значения 0 и 1";
	fact = check_border(4,4);
	cout << endl << " Фактическое значение если мы вышли за границу 1 и ожидаемый результат 1:  " << endl;
	cout << "Test 1: ожидаемый = фактическому?(равен=1 если нет то 2) :" << ASSERT(expected,fact) << endl;
	fact = 0;
	fact = check_border(2,2);
	cout << endl << "Фактическое значение если мы вышли за границу: 1 и ожидаемый результат 0:  " << endl;	
	cout << "Test 2: ожидаемый = фактическому?(равен=1 если нет то 2) :" << ASSERT(expected2,fact) << endl;
	
	

	cout <<"\t\t\tПроверка функции checkw"<<endl;
	cout <<"\tДва ожидаемых значения 0 = все еще играем, 1 = определён победитель" << endl;
	fact = 0;
	fact = checkw(massive,arr);
	cout << "Test 1: ожидаемый *0* равен фактическому?(0=да,1=нет): " << ASSERT_C(expected2,fact) << endl;
	fact = 0;
	fact = checkw(massive,mass);
	cout << "Test 2: ожидаемый *1* равен фактическому?(0=нет,1=да): " << ASSERT_C(expected,fact) << endl;
	

} 
