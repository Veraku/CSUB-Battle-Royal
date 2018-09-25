#include <iostream>
#include "fonts.h"
void  art_credits(int x, int y)
{
	Rect r;
	r.bot =y;
	r.left=x;
	ggprint8b(&r,16,0X00ff0000,"Arturo Urbina");
}
