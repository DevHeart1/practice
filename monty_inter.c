#include "monty.h"

int main(int argc, char **argv)
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
	}6+
	.

	char buffer[128];
	int line_num;

	while(fget(buffer, sizeof(buffer), file) != NULL)
	{
		line_num++
		char *opcode = strtok(buffer, " \t\n");
		
		if (opcode == NULL || strlen(opcode) == 0))
		{
			continue;
		}
		else
		{
			fprintf(stderr, "L%d: unknown instruction" opcode)
		}
	}

	

	return(o);
}
