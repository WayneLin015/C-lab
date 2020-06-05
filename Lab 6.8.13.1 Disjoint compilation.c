#include <stdio.h>

// floydstr.c
void floydtri(int rows)
{
    int i,  j, a = 1;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("%d ",a);
            a++;
        }
    printf("\n");
    }
}
// floydtri.h
//extern void floydtri(int);

// triangle.c
void triangle(int rows) {
    int i, j;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<i; j++)
        {
            printf("\\");
        }
        printf("\n");
    }
}

//triangle.h
//extern void triangle(int);

int main(int argc, char *argv[]){
    int n;
	scanf("%d", &n);
	triangle(n);
	floydtri(n);
	return 0;
}
