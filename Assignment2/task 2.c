/*
*Function: doubler_and_flipper
*----------------
*Returns a word with each character doubled and flipped 
*
*(char) name saves the input value of the user name 
*(int) lengthy: saves the length of the name of user 
*(int) holder: holds each character value of the char when using arrays 
*
*returns: name flipped and doubled
*/

#include <stdio.h>
#include <string.h>


void Doubler(char*N)
{
  int lengthy = strlen(N);
  // divides word in half and then goes through words by exchanging first and last places until getting to the center
  for(int i = 0; i<lengthy/2; i++)
  {
    int holder = N[i];
    N[i] = N[lengthy-i-1];
    N[lengthy-i-1] = holder; 

  }
  
  // doubles the letters of a word ex: Richard to RRiicchhaarrdd
  for(int i = 0; i < lengthy; i++) 
  {

    for(int j=0; j<2; j++)
    {
      printf("%c",N[i]);
    }
  
  } 
}

// main program that runs program to reverse the name and double each letter 
int main(void) 
{
  char name[40];
  
  printf("Enter your full name: ");
  scanf("%s", name);

  Doubler(name);

}