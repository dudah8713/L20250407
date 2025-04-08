#include <iostream>
#include <algorithm>
#include <random>

using namespace std;

#define MAX_NUM 45

int ArrLotto[MAX_NUM] = { 0, };

void Initialize()
{
    for (int Number = 0; Number < MAX_NUM; Number++)
    {
        ArrLotto[Number] = Number + 1;
    }
}

void Shuffle()
{
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(std::begin(ArrLotto), std::end(ArrLotto), g);
}

void Print()
{
    for (int Number = 0; Number < 6; Number++)
    {
        cout << ArrLotto[Number] << endl;
    }
}

int main()
{
    Initialize();
    Shuffle();
    Print();
    
    return 0;
}