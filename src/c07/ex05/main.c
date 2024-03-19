#include <stdio.h>

char    **ft_split(char *str, char *charset);

int	main(void)
{
	char *p = "this is a very long; string test 1 2 3";
	char *cs = ";";
	char **final;
	int	i;

	final = ft_split(p, cs);
	
	i = 0;
	while (final[i])
	{
		printf("%s\n", final[i]);
		i++;
	}
}
