/*
*Function: years_bank_savings
*----------------
*Returns the years that Frank will have money in his bank *account from his savings
*
*(int) won, withdrawings, badak: values of money from *the bank
*(double) earnings: percent of annual interst of bank
*(bool) checks true or false for the money in the bank 
*
*returns: the years that Frank will have less than $20,000 *in his account.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h> 

int main(void) 
{
  int won = 2000000;
  double earnings = won*1.03;
  int withdrawings = 300000;
  bool morethan = true;
  int badak = 20000;
  int results = 0; 
  int years;
// This loop goes over the years as long that badak is not more than won 
  for (years = 0; morethan; years++) 
  {
    won -= withdrawings;
    won = won*1.03;
    // this if loop checks whether to stop the for loop for when the bank has less than the quantity of badak
    if(won < badak)
    {
      morethan = false;
    }
    results = years;
  }
  
  printf("It takes %d years for Frank to have money less than $20,000 in his account.", years);
  return 0;

}