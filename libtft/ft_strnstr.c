char *ft_strnstr(char *str, char *to_find, unsigned long size)
{
    int i;
    int j;

    i = 0;
    if (!to_find[i])
        return(str);
    while (str[j])
    {
        if (str[j] == to_find[i])
        {
            
        }
    }
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*aux_str;
	char	*aux_to_find;

	if (*to_find == '\0')
		return (str);
	aux_to_find = to_find;
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			aux_str = str;
			while ((*str != '\0') && (*to_find != '\0') && (*str == *to_find))
			{
				to_find++;
				str++;
			}
			if (*to_find == '\0')
				return (aux_str);
			to_find = aux_to_find;
			str = aux_str + 1;
		}
		else
			str++;
	}
	return (0);
}