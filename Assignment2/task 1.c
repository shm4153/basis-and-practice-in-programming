#include <stdio.h>
/*
*Function: summation_of_number
*----------------
*Returns the summation of a number 
*
*(int) num, i , sumNum: saves the value of numbers integers
*
*
*returns: the result of summation of a value of N typed by the user .
*/

int main(void) {
  int num; 
  int i = 1; 
  int sumNum = 0; 
  
// asks the user to enter a value of N and saves it to num
  printf("Enter the value of N: ");
  scanf("%d", &num);

// finds with a while loop the summation of the number typed by the user 
  while (i <= num) {
    sumNum+=i*2;
    i++;
    
  }
// prints the results of summation after calculations
  printf("The result of summation: %d\n", sumNum);
  return 0;
}