# include <stdio.h>
# include <stdint.h>
/* A program to print multiplacation table 1*1 to 12*10*/
# define COLMAX 10
# define ROWMAX 12

int main()
{
   int row,column,y;
   row = 1;
   printf("MULTIPLICATION TABLE\n\t ");
   printf("----------------------------------------------\n");
   do
   {
      column=1;
      do
      {
         y = row*column;
         printf("%d\t",y);
         column=column+1;
      } while (column<=COLMAX);
      printf("\n");
      row=row+1;
      
   } while (row <= ROWMAX);
   printf("----------------------------------------------\t");
   
    return 0;
}
