//Resource file for Andrew Burt.
#include <iostream>
#include "fonts.h"
using namespace std;
void andrew_credits(int x, int y)
{
    Rect r;
    r.bot = x;
    r.left = y;
    ggprint8b(&r, 16, 0x00ff0000, "Andrew Burt");
}

