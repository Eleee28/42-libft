#include "libft.h"

int	ft_toupper(int c)
{	
    if ((c >= 'a' && c <= 'z'))
        c -= 32;
		
	return (c);
}

/*
#include <ctype.h>

int main()
{
	printf("%c\n", ft_toupper('a'));
    printf("%c\n", toupper('a'));
	return (0);
}
*/