#ifndef MEM_FUNC_C
#define MEM_FUNC_C

#include <time.h>
#include <stdlib.h>

unsigned int allocateMemory( int totMem )
{
	unsigned int address;

	srand( time( NULL ) );

	if( totMem > 0 )
	{
		address = rand() % totMem;
	}

	return address;
}

#endif