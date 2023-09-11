int	isascii(int c)
{
	int	bl;

	bl = 0;
	if(c >= 0 && c <= 177)
	{
		bl = 1;
	}
	return bl;
}