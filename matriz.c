#include <stdio.h>

int main()
{
   int m, n, p, c, d, k, sum = 0;

   int first[10][10], second[10][10], multiply[10][10];

   printf("Ingrese el numero de filas y columnas de la matriz A: ");
   scanf("%d%d", &m, &n);
   printf("Ingrese los elementos de la matriz A\n");

   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);

   printf("Ingrese el numero de filas y columnas de la matriz B: ");
   scanf("%d%d", &n, &p);
   printf("Ingrese los elementos de la matriz B\n");

   for (c = 0; c < n; c++) 
      for (d = 0; d < p; d++)
         scanf("%d", &second[c][d]);

   for (c = 0; c < m; c++) {
      for (d = 0; d < p; d++) {
         for (k = 0; k < n; k++) {
            sum = sum + first[c][k]*second[k][d];
         }

         multiply[c][d] = sum;
         sum = 0;
      }
   }

   printf("La matriz resultante es:\n");

   for (c = 0; c < m; c++) {
      for (d = 0; d < p; d++)
         printf("%d\t", multiply[c][d]);

      printf("\n");
   }

   return 0;
}