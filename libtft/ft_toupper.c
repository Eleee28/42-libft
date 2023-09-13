int	ft_toupper(int c)
{	
    if ((c >= 'a' && c <= 'z'))
        c -= 32;
		
	return (c);
}

/*
#include <ctype.h>
#include <stdio.h>

int main()
{
	printf("%c\n", ft_strupcase('a'));
    printf("%c\n", toupper(p));
	return (0);
}
*/