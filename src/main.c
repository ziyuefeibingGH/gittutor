#include <stdio.h>
#include "version.h"

int main(void)
{
	printf("Hello, world.\n");
	printf("version: %s.\n", __VERSION);
	return 0;
}
