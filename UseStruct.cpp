#include <iostream>
#include <windows.h>
#include <WinUser.h>

using namespace std;

void GotoXY(int X, int Y)
{
    COORD Cur;
    Cur.X = X;
    Cur.Y = Y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

struct PlayerInfo
{
    int X = 5;
    int Y = 5;
    string Shape = "P";
}typedef PLAYERPOS;

int main()
{
    PLAYERPOS* PlayerData;
    PlayerData = new PLAYERPOS;

    while (TRUE)
    {
        if (GetAsyncKeyState(VK_LEFT) & 0x8001)
        {
            PlayerData->X--;
        }
        else if (GetAsyncKeyState(VK_RIGHT) & 0x8001)
        {
            PlayerData->X++;
        }
        else if (GetAsyncKeyState(VK_UP) & 0x8001)
        {
            PlayerData->Y--;
        }
        else if (GetAsyncKeyState(VK_DOWN) & 0x8001)
        {
            PlayerData->Y++;
        }

        if (PlayerData->X < 0 || PlayerData->X > 100)
        {
            PlayerData->X = 0;
        }
        else if (PlayerData->Y < 0 || PlayerData->Y > 100)
        {
            PlayerData->Y = 0;
        }

        GotoXY(PlayerData->X, PlayerData->Y);
        cout << PlayerData->Shape << endl;
        system("cls");
    }

    delete PlayerData;
    PlayerData = nullptr;

    return 0;
}