int	ft_isdigit(int c)
{
	int	ret_value;

	if (c >= 48 && c <= 57)
		ret_value = 1;
	else
		ret_value = 0;
	return (ret_value);
}