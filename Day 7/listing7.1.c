/* expenses.c - Demonstrates use of an array */

#include <stdio.h>

/* Declare an array to hold expenses, and a counter variable */

float expenses[13];
int count;

int main(void)
{
  /* Input data from keyboard in array */

  for (count = 1; count < 13; count++)
  {
    printf("Enter enpenses for month %d: ", count);
    scanf("%f", &expenses[count]);
  }

  /* Print array contents */
  for (count = 1; count < 13; count++)
  {
    printf("Month  %d = $%.2f\n", count, expenses[count]);
  }
  return 0;
}
