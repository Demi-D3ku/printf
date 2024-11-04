#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int	i;

	i = printf("%d\n", NULL);
	printf("%d\n", i);
	i = printf("%i\n", NULL);
	printf("%d\n", i);
	i = printf("%u\n", NULL);
	printf("%d\n", i);
	i = printf("%x\n", NULL);
	printf("%d\n", i);
	i = printf("%X\n", NULL);
	printf("%d\n", i);
	i = printf("%p\n", NULL);
	printf("%d\n", i);
	i = printf("%s\n", NULL);
	printf("%d\n", i);
	i = printf("%c\n", NULL);
	printf("%d\n\n", i);
	i = ft_printf("%d\n", NULL);
        printf("%d\n", i);
        i = ft_printf("%i\n", NULL);
        printf("%d\n", i);
        i = ft_printf("%u\n", NULL);
        printf("%d\n", i);
        i = ft_printf("%x\n", NULL);
        printf("%d\n", i);
        i = ft_printf("%X\n", NULL);
        printf("%d\n", i);
        i = ft_printf("%p\n", NULL);
        printf("%d\n", i);
        i = ft_printf("%s\n", NULL);
        printf("%d\n", i);
        i = ft_printf("%c\n", NULL);
        printf("%d\n", i);
	printf("%d\n", printf(NULL));
	ft_printf("%d\n", ft_printf(NULL));
}
