//joelS.cpp
//Author: Joel Staggs

#include <iostream>
#include "fonts.h"


//Function required for lab 5
void joel_credits(int x, int y){
        r.bot = y;
        r.left = x;

        ggprint8b(&r, 16, 0x00ff0000, "Joel Staggs");
}
