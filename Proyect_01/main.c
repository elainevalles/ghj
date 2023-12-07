#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1, str, 1);
		str++
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int maint(int ac, char **av)
{
	int i = 1;

	if (ac != 2)
	{
		ft_putstr("Error!! Introduce 1 param");
		return (1);
	}
	else
	{
		while(av[1][i] != '\0')
		{	
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				ft_putchar(av[1][i]);	
			}
			i++;
		}
	}
	return (0);
	
}
