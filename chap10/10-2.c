#include <stdio.h>

int gcd( int a, int b );
int lcm( int a, int b );

int main( )
{
	int su1, su2;
	printf( "두개의 정수 입력 : " );
	scanf( "%d%d", &su1, &su2 );
	printf( "GCD( 최대공약수 ): %d\n", gcd( su1, su2 ) );
	printf( "LCM( 최소공배수 ): %d\n\n", lcm( su1, su2 ) );
	return 0;
}

int gcd( int a, int b )
{
	if( a < b )
	{
		return gcd( b, a );
	}
	else if( a % b == 0 )
	{
		return b;
	}
	else
	{
		return gcd( b, a%b );
	}
}

int lcm( int a, int b )
{
	return a * b / gcd( a, b );
}
