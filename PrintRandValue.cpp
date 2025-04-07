#include <iostream>
#include <Windows.h>
#include <unordered_map>

using namespace std;

int main()
{
	std::unordered_map<int, bool> unmapBall;
	bool isAllPrint = true;
	int nunmber = 0;

	for (; nunmber < 53; nunmber++)
	{
		unmapBall.insert(make_pair(nunmber, false));
	}

	std::srand(GetTickCount64());
	
	while(isAllPrint)
	{
		int randValue = std::rand() % 53;

		auto iter = unmapBall.find(randValue);
		
		if (iter->second == false)
		{
			cout << iter->first << endl;
			iter->second = true;
			nunmber--;
		}

		if (nunmber == 0)
			isAllPrint = false;
	}

	return 0;
}