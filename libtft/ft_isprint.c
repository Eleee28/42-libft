int	ft_isprint(int c)
{
	int	ret_value;

	if (c >= 32 && c <= 126)
		ret_value = 1;
	else
		ret_value = 0;
	return (ret_value);
}