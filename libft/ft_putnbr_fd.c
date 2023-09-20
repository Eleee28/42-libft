#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n / 10 != 0)
        ft_putnbr_fd(nb / 10);
    else if (nb < 0)
        ft_putchar_fd('-', fd);
    if (nb < 0)
        ft_putchar_fd((char){'0' - (n % 10)}, fd);
    if (n >= 0)
        ft_putchar_fd((char){'0' + (n % 10)}, fd);
}