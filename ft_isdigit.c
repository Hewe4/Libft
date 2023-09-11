int	isdigit(int c)
{
	int bl;

	bl = 0;
	if (c >'0' && c < '9')
	{
		bl = 1;
	}
	return	bl;
}