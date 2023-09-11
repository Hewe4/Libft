int	isalpha(int c)
{
	int bl;

	bl = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		bl = 1;
	}
	return	bl;
}