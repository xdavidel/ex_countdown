#include <iostream>
#include <windows.h>

const int INITIAL_COUNT = 12;
const int SLEEP_TIME = 1000;

int main()
{
    int counter = INITIAL_COUNT;

    while (counter > 0)
    {
        std::cout << "\rTime until takeoff: " << counter-- << " ";
        Sleep(SLEEP_TIME);
    }

    std::cout << "\rTakeoff                ";
}