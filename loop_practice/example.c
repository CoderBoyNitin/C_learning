#include <stdio.h>  // Include the standard input/output header file.

void main() {
   int i, j, spc, rows, k, t = 1;  // Variable declarations

   printf("Input number of rows : ");  // Prompt user for input
   scanf("%d", &rows);  // Read the user input

   spc = rows + 4 - 1;  // Calculate the initial number of spaces

   for (i = 1; i <= rows; i++) {  // Loop to generate rows
      for (k = spc; k >= 1; k--) {  // Print leading spaces for alignment
         printf(" ");
      }

      for (j = 1; j <= i; j++) {  // Print numbers in increasing order
         printf("%d ", t++);  // Print current value of 't' and increment
      }

      printf("\n");  // Move to next line after each row
      spc--;  // Decrease spaces for the next row
   }
}
