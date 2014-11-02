#include <stdio.h>

int sc = 1;
int a = 0;

int main( int argc , char *argv[] )
{

	while( argv[1][a] != 0 && argv[2][a] != 0 )
	{
		a++;
		if( argv[1][a] != argv[2][a] )
			sc = 0;
	}

	printf( "%s\n%s\n" , argv[1] , argv[2] );

	if( sc )
		printf("The checksums match!\n");
	else
		printf("The checksums do not match!\n");

	return 0;
	
}