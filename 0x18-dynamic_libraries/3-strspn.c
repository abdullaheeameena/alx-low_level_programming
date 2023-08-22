#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

unsigned int _strspn(char *s, char *accepted)
{
	return strspn(s, accepted);
}
