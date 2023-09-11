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

int	isalnum (int c)
{
    int bl;

    bl = 0;
    if(isalpha(c) == 1 || isdigit(c) == 1)
    {
        bl = 1;
    }
    return	bl;
}