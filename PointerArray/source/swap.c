void swapA(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}


void swapP(int *px, int *py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}
