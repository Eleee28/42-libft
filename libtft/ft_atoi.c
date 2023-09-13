int	ft_atoi(char *str)
{
	int	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
    if (str[0] == '-')
    {
        sign = -1;
        i = 1;
    }
    else if (str[0] == '+')
        i = 1;
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}