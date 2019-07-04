
#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>

//int		main(int argc, char **argv)
/* {
	int		fd;
	char	**line;
	int		gnlret;
	int		linecount;

	linecount = 0;
	gnlret = 1;
	fd = 0;
	printf("Argc: %d\n", argc);
	printf("File to open: %s\n", argv[1]);
	line = ft_memalloc(sizeof(char **));
	printf("BUFF_SIZE: %d\n\n\n", BUFF_SIZE);
	while ((gnlret = get_next_line(fd, line)) > 0)
	{
		printf("%s\n", *line);
		linecount++;
	}
	printf("Line count: %d\n", linecount);
	printf("Finished\n\n");
	close(fd);
	while(1); 
	return (0);
} */

int main ()
{
    char *line;
    int i;

    while ((i = get_next_line(0, &line)) == 1)
    {
        printf("%s", line);
        printf("%d", i);
        free(line);
    }
   
    return (0);
}