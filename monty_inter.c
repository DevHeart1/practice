#include "monty.h"

int main(int argc, char argv)
{
	if (argv[1] == NULL || argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);

	}

	char *filepath = argv[1];
	FILE *file

	file = fopen(filepath, "r")
	if(file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n" filepath);
		exit(EXIT_FAILURE);
	}

	

	return(o);
}
