#include <REGX52.H>
sbit down = P2^3;
sbit right = P2^2;
sbit left = P2^1;
sbit up = P2^0;

unsigned short num=0;
short key()
{
	//P2 = 0xff;
	if (up == 0)
		num = 1;
	if (left == 0)
		num = 2;
	if (right == 0)
		num = 3;
	if (down == 0)
		num = 4;
	return num;
}