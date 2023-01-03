/*
 * Function: USER_MEDICAL_CHECKUP
 * --------------
 * Returns the user medical checkup in a summary
 * 
 * age: the age of the user as an integer
 * gender: the gender of the user which varies in M or F
 * blood: the blood type of the user which varies in A, B or O
 * height: the height of the user in meters which includes decimal
 * weight: the weight of the user in kilograms which includes decimal
 * temperature: the temperature of the user in temperature in degrees celsius
 * 
 * return: the medical checkup summary of a user from ints inputed information
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
  int age;
  char gender;
  char blood;
  float height, weight, temperature;

  printf("What is your age? \n");
  // Asks user for age
  scanf("%d", &age);
  // saves user age into integer age
  printf("What is your gender (M/F)? \n");
  // Asks use for gender
  scanf(" %c", &gender);
  // saves user gender into integer age
  printf("What is your height (in meters)? \n");
  // Asks user for height
  scanf("%f", &height);
  // saves user height in integer height
  printf("What is your weight? (in kilograms)\n");
  // asks user weight 
  scanf("%f", &weight);
  //saves user weight in integer weight
  printf("What is your blood type? (allowable blood types: A, B and O)\n");
  // Asks user for blood type
  scanf(" %c", &blood);
  //saves user blood type in char blood
  printf("What is your body temperature? \n");
  // asks user for body temperature
  scanf("%f", &temperature);
   //saves user temperature in char temperature
  printf("You are %d years old and your gender is \"%c\".\n Your height and weight are %.2f m, %.2f kg.\n Your blood type is \'%c\'.\n Your body temperature is %.2f degrees Celsius.\n", age, gender, height, weight, blood, temperature);
  return 0;
}