#include <iostream>
#include "fonts.h"
void bryan_credits(int x, int y){
	Rect r;
  r.bot = y;
	r.left = x;
	ggprint8b(&r, 16, 0x00ff0000, "Bryan Sanders");


}
