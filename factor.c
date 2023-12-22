#include "factor.h"

/**
 * main - main function
 *
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	size_t cunt;
	ssize_t ln;
	char *buffer = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while((ln = getline(&buffer, &cunt, fp)) != -1)
	{
		fctrze(buffer);
	}
return (0);
}
