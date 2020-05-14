#include <stdio.h>

int main()
{
    char board[8][8];
    int i, j;
    
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if (i==0 || i==7){
                switch (j){
                    case 0:
                        board[i][j]='R';
                        break;
                    case 1:
                        board[i][j]='N';
                        break;   
                    case 2:
                        board[i][j]='B';
                        break;                        
                    case 3:
                        board[i][j]='Q';
                        break;                        
                    case 4:
                        board[i][j]='K';
                        break;                        
                    case 5:
                        board[i][j]='B';
                        break;                        
                    case 6:
                        board[i][j]='N';
                        break;                        
                    case 7:
                        board[i][j]='R';
                        break;
                }
            }
            else if(i==1 || i == 6){
                board[i][j]='P';
            }           
            else
                board[i][j]=' ';
        }
    }


    for (int i=0;i<8;i++){
       for (int j = 0; j<8;j++){
           printf("%c",board[i][j]);
       }
       printf("\n");
   }
    return 0;
}
