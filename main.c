#include "get_next_line.h"
#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
int	main(int ac , char **av)
{
	int	fd;
	char	*line;
	int 	i;
	i = 0;

	fd = open(av[1], O_RDONLY);
	while(get_next_line(fd,&line) == 1)
	{
		printf(" %s , | %d | \n",line,i);
		i++;
	}
	if (ac == 2)
		close(fd);
	return (0);
}
