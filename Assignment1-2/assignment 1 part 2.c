/*
 * Function: CHANGING_TO_NECESSARY_CHARACTERS
 * --------------
 * changes each character of the sentence from the needed letters for correct return
 * 
 * char sentence: has a sentence of a phrase in which is incorrect 
 * 
 * return: returns one character one per one within the corresponding index place for the sentence letters 
 */

#include <stdio.h>
int main()
{
  char sentence[] = "hisjniro, right24s8ress, qydnfiety, 5s8flh.";
  // write your code here
  // changes the index values for each space of the sentence with the wanted value 
  sentence[0] = 'H';
  sentence[1]= 'u';
  sentence[2]= 'm';
  sentence[3] ='a';
  sentence[4] ='n';
  sentence[5] ='i';
  sentence[6] ='t';
  sentence[7] ='y';
  sentence[10] ='R';
  sentence[15] ='e';
  sentence[16] ='o';
  sentence[17] ='u';
  sentence[18] ='s';
  sentence[19] ='n';
  sentence[25] ='P';
  sentence[26] ='r';
  sentence[27] ='o';
  sentence[28] ='p';
  sentence[29] ='r';
  sentence[36] ='W';
  sentence[37] ='i';
  sentence[38] ='s';
  sentence[39] ='d';
  sentence[40] ='o';
  sentence[41] ='m';

  printf("%s\n", sentence);
  return 0;
  //Humanity, Righteousness, Propriety, Wisdom
}