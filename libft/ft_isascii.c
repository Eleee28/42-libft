int	ft_isascii(int c)
{
	int	ret_value;

	if (((c) & ~0x7f) == 0)
		ret_value = 1;
	else
		ret_value = 0;
	return (ret_value);
}