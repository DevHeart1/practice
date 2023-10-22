#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *filepath;
    FILE *file;
    char buffer[128];
    int line_num = 1;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    filepath = argv[1];

    file = fopen(filepath, "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", filepath);
        exit(EXIT_FAILURE);
    }

    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        char *opcode = strtok(buffer, " \t\n");

        if (opcode == NULL || strlen(opcode) == 0)
        {
            line_num++;
            continue;
        }
        else
        {
            fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
            exit(EXIT_FAILURE);
        }

        line_num++;
    }

    fclose(file);

    return (0);
}

