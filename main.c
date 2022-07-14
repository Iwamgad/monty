#include "monty.h"

/**
 * main - intepretes Monty ByteCode files.
 * @argc: arguments
 * @argv: array of the arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	FILE *filePtr;
	char *line = NULL, buffer[20], valBuffer[20];
	ssize_t readBytes = 0, token = 0;
	size_t bufferSize = 0;
	unsigned int lineNum = 0;
	stack_t *stack = NULL;

	if (argc != 2 || !argv[1])
		usage_error();
	sharedPack.queue_mode = 0; /* switch off queue mode (stack mode) */
	sharedPack.file = argv[1];
	filePtr = fopen(sharedPack.file, "r");
	if (!filePtr)
		fileError();
	while ((readBytes = getline(&line, &bufferSize, filePtr)) != -1)
	{
		lineNum++;
		token = sscanf(line, "%s %s", buffer, valBuffer);
		if (token > 2)
		{
			free(line);
			usageError();
		}
		free(line);
		line = NULL;
		sharedPack.opcode = buffer;
		sharedPack.n = valBuffer;
		if (token > 0 && sharedPack.opcode[0] != '#')
			getOpCode(sharedPack.opcode)(&stack, lineNum);
		memset(buffer, '\0', sizeof(buffer));
		memset(valBuffer, '\0', sizeof(valBuffer));
	}
	free(line);
	free_stack(&stack);
	fclose(filePtr);
	return (0);
}
