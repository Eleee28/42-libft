#include <ctype.h>

static int	ft_islower(int c)
{
	int	ret_value;

	if (c >= 97 && c <= 122)
		ret_value = 1;
	else
		ret_value = 0;
	return (ret_value);
}

static int	ft_isupper(int c)
{
	int	ret_value;

	if (c >= 65 && c <= 90)
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

#include <stdio.h>

int	main(void)
{
	printf("Original: %d\n", isalpha('a'));	// isalpha returns 1024 if true, 0 else
	printf("Mine: %d\n", ft_isalpha('a'));

	printf("Original: %d\n", isdigit('3'));	// isdigit returns 2048 if true, 0 else
	printf("Mine: %d\n", ft_isdigit('3'));
	
	printf("Original: %d\n", isalnum('9'));	// isalnum returns 8 if true, 0 else
	printf("Mine: %d\n", ft_isalnum('9'));
	
	printf("Original: %d\n", __isascii('"'));	// isascii returns 1 if true, 0 else
	printf("Mine: %d\n", ft_isascii('"'));
	
	printf("Original: %d\n", isprint('~'));	// isprint returns 16384 if true, 0 else
	printf("Mine: %d\n", ft_isprint('~'));
	
	return (0);
}	