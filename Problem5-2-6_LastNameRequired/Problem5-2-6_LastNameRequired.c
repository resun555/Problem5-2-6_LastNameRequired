// Problem5-2-6_LastNameRequired.c : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>

#pragma warning( disable : 4996 )


int main()
{
	const char lastName[] = { 0xD5, 0xC5, '\0' };
	char sname[20];
	size_t count = 0;
	do
	{
		gets_s(sname, 20);
		if (strncmp(sname, lastName, 3) == 0)
		{
			count++;
		}
	} while (strcmp(sname, "") > 0);
	printf("%zu", count);
    return 0;
}

