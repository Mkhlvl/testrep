#include <stdio.h>
#include <string.h>

int main (int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
	{
	int n;
	n = strlen(argv[i]);
	printf("%d %s\n", n, argv[i]);
		for (int j = 0; j < n; j++)
				{
				printf("%c\n", argv[i][j]);
				}
				printf("\n");
				}
	
}
