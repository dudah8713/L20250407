#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	std::srand(GetTickCount64());
	int randValue = std::rand() % 53;

	cout << randValue;
	
	return 0;
}