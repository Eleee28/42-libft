#include "libft.h"

static int	ft_islower(int c)
{
	int	ret_value;

	if (c >= 'a' && c <= 'z')
		ret_value = 1;
	else
		ret_value = 0;
	return (ret_value);
}

static int	ft_isupper(int c)
{
	int	ret_value;

	if (c >= 'A' && c <= 'Z')
		ret_value = 1;
	else
		ret_value = 0;
	return (ret_value);
}

int ft_isalpha(int c)
{
	int	ret_value;

	if (ft_islower(c) || ft_isupper(c))
		ret_value = 1;
	else
		ret_value = 0;
	return (ret_value);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("Original: %d\n", isalpha('a'));	// isalpha returns 1024 if true, 0 else
	printf("Mine: %d\n", ft_isalpha('a'));
	
	return (0);
}
*/