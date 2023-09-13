#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				ret_value;
	size_t	i;

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

