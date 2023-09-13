#include "libft.h"

int	ft_isalnum(int c)
{
	int	ret_value;

	if (ft_isalpha(c) || ft_isdigit(c))
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
	printf("Original: %d\n", isalnum('9'));	// isalnum returns 8 if true, 0 else
	printf("Mine: %d\n", ft_isalnum('9'));
	
	return (0);
}
*/