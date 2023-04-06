#include <stdlib.h>
#include <stdio.h>



int main()
{
  
    int Matriz[3][3];
    int *Ponteiro;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Matriz[i][j] = j;
          
        }
    }

      Ponteiro = &Matriz[0][0];
   
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", *(Ponteiro + j));
            printf(" "); 
          
        }
       printf("\n");
    }
    
    return 0;
}

