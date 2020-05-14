#include <stdio.h>

int main()
{
    int amount;
    scanf("%d", &amount);
    if (amount>1024*1024) {
        printf("Too much memory requested.");
        return 0;
    }
    //char characters[amount];
    char ch = 'A';
    for (int i=1; i<=amount; i++)
    {
        //characters[amount] = ch;
        if(i<=400)
            printf("%c", ch);
        if(i%40==0)
            printf("\n"); 
        if(i%26==0)
            ch = 'A';
        else
            ch++;
    }
    return 0;
}
