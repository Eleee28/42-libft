static int	ft_total_len(char *src, char *dest, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	return (dest_len + src_len);
}

unsigned long	ft_strlcat(char *dest, char *src, unsigned long size)
{
	unsigned long	i;
	unsigned long	j;
	unsigned long	total_len;

	total_len = ft_total_len(src, dest, size);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (i < size)
	{
		while (src[j] && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (total_len);
}