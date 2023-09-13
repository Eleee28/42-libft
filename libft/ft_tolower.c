#include "libft.h"

int	ft_tolower(int c)
{	
    if ((c >= 'A' && c <= 'Z'))
        c += 32;
		
	return (c);
}

/*
#include <ctype.h>

int main()
{
	printf("%c\n", ft_tolower('A'));
    printf("%c\n", tolower('A'));
	return (0);
}
*/