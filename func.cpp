#include "func.h"



void drawRectangle(int H, int W)
{
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            std::cout << "$";
        }
        std::cout << std::endl;
    }
}

 