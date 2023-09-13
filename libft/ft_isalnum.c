int	ft_isalnum(int c)
{
	int	ret_value;

	if (ft_isalpha(c) || ft_isdigit(c))
		ret_value = 1;
	else
		ret_value = 0;
	return (ret_value);
}