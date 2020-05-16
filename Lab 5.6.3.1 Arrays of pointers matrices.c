#include <stdio.h>

int main()
{
    int i, j;
    int input;
    scanf("%d",&input);
    if(input>=20)
        printf("Matrix too big.");
    else{
        printf("\t");
        for(i=1; i<=input; i++){
            printf("%d\t",i);
        }
        printf("\n");
       
        for(i=1; i<=input; i++){
            printf("%d\t",i);
                for(j=1; j<=input; j++){
                    printf("%d\t",i*j);
                }
                printf("\n");
            }        
    }
    

    return 0;
}
