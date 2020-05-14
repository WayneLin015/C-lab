#include <stdio.h>
int main()
{
    char c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    int *pi;
    char *pc;
    
	printf("%d byte for chars\n", sizeof(char));
	printf("%d byte for char variables\n", sizeof(c));
	
	printf("%d bytes for shorts\n", sizeof(short));
	printf("%d bytes for short variables\n", sizeof(s));
	
	printf("%d bytes for ints\n", sizeof(int));
	printf("%d bytes for int variables\n", sizeof(i));
	
	printf("%d bytes for longs\n", sizeof(long));
	printf("%d bytes for long variables\n", sizeof(l));
	
	printf("%d bytes for long longs\n", sizeof(long long));
	printf("%d bytes for long long variables\n", sizeof(ll));
	
	printf("%d bytes for floats\n", sizeof(float));
	printf("%d bytes for float variables\n", sizeof(f));
	
	printf("%d bytes for doubles\n", sizeof(double));
	printf("%d bytes for double variables\n", sizeof(d));
	
	printf("%d bytes for pointers\n", sizeof(int *));
	printf("%d bytes for pointer variables\n", sizeof(pi));
	
	printf("%d bytes for address of char variable\n", sizeof(&pc));
	printf("%d bytes for pointer to char variable\n", sizeof(pc));
	printf("%d byte for value stored by pointer to char variable\n", sizeof(*pc));
	return 0;
}
