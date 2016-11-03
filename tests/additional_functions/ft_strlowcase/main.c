#include <stdlib.h>
#include <unistd.h>
#include "../../../libft.h"

void	ft_print_result(char const *s)
{
	while (*s)
	{
		write(1, &*s, 1);
		s++;
	}
}

int		main(int argc, const char *argv[])
{
	if (argc == 1)
		return (0);
	if (atoi(argv[1]) == 1)
		ft_print_result(ft_strlowcase("LOREM IPSUM DOLOR SIT AMET"));
	else if (atoi(argv[1]) == 2)
		ft_print_result(ft_strlowcase(" \n\tlorem 4ipSum DOLOR s\nit aMeT "));
	else if (atoi(argv[1]) == 3)
		ft_print_result(ft_strlowcase("HeY ! 42mots quArAnte-deux; cinquante+et+un"));
	return (0);
}
