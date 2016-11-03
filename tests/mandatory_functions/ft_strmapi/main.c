#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "../../../libft.h"

void	ft_print_result(char const *s)
{
	while (*s)
	{
		write(1, &*s, 1);
		s++;
	}
}

char	mapi(unsigned int i, char c)
{
	(void)i;
	c = 'm';
	return (c);
}

int		main(int argc, const char *argv[])
{
	char	*str;
	char	*strmapi;

	str = (char *)malloc(sizeof(*str) * 10);
	if (argc == 1 || !str)
		return (0);
	if (atoi(argv[1]) == 1)
	{
		memset(str, 'd', 9);
		str[9] = '\0';
		strmapi = ft_strmapi(str, &mapi);
		ft_print_result(strmapi);
		if (strmapi == str)
			ft_print_result("\nA new string was not returned");
	}
	return (0);
}
