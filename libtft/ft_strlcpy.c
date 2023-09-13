static int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

unsigned long	ft_strlcpy(char *dest, char *src, unsigned long size)
{
	unsigned long	size_src;
	unsigned long	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	size_src = ft_strlen(src);
	return (size_src);
}