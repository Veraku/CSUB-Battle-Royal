
// bs 2018-09-25: External file for Final Project CMPS 3350

#include <iostream>
#include "fonts.h"

void bryan_credits(int x, int y)
{
	Rect r;
	r.left = x;
	r.bot = y;
	ggprint8b(&r, 16, 0x00ff0000, "Bryan Sanders");
}
