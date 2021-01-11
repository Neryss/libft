#include "libft.h"

int		ft_is_in_str(const char *s, int c)
{
	int		i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	if (c == 0)
		return (1);
	return (0);
}
