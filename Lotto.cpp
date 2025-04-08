#include <iostream>
#include <algorithm>

using namespace std;

int ArrLotto[45] = { 0, };

void Initialize()
{
    for (int Number = 0; Number < 45; Number++)
    {
        ArrLotto[Number] = Number + 1;
    }
}

void Shuffle()
{
    srand(time(NULL));
    random_shuffle(std::begin(ArrLotto), std::end(ArrLotto));
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