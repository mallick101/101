#include <stdio.h>
 
int main()
{
   int matrix[4][4];
   int transpose[4][4];
   int i,j;
 
   for (i = 0; i < 4; i++)
      {
	  for(j = 0; j < 4; j++)
        {
		  scanf("%d", &matrix[i][j]);
		  
	     }
	     printf("\n");
	     
    }
 
   for (i = 0; i < 4; i++)
     {
	   for( j = 0 ; j < 4 ; j++ )
        {
		  transpose[i][j] = matrix[j][i];
        }
    }
   printf("Transpose of the matrix:\n");
 
    for (i = 0; i < 4; i++)
   {
      for( j = 0 ; j < 4 ; j++ )
      {
      	printf("%d\t", transpose[i][j]);
	  }
      printf("\n");
   }
 
   return 0;
}

	








