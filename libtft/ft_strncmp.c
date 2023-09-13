int	ft_strncmp(char *s1, char *s2, unsigned long n)
{
	int				ret_value;
	unsigned long	i;

	i = 0;
	ret_value = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && ret_value == 0 && i < n)
	{
		if (ret_value == 0 && s1[i] < s2[i])
			ret_value = s1[i] - s2[i];
		else if (ret_value == 0 && s1[i] > s2[i])
			ret_value = s1[i] - s2[i];
		i++;
	}
	return (ret_value);
}