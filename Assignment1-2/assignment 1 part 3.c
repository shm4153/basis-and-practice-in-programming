/*
 * Function: USER_MEDICAL_CHECKUP
 * --------------
 * Returns the user medical checkup in a summary
 * 
 * length: the age of the user as an integer
 * width: the gender of the user which varies in M or F by a character
 * height: the height of the right retangualar prism in integer form
 * area: the area which saves the inegers of length by l, width b w, and height by h
 * 
 * return: the area of the right rentangular prism by a pretty sentence out of the inputs of users
 */

#include <stdio.h>
#define AREA(l,w,h) 2*(w*l+h*l+h*w)

int length;
int width;
int height;
int area;

int main(void) {
  printf("Length (l): ");
  //asks user for length of the right rectangular prism 
  scanf("%d", &length);
  // saves length of user to integer length 
  printf("Width(w): ");
  //asks user for width of the right rectangular prism 
  scanf(" %d", &width);
  // saves width of user to integer length 
  printf("Height (h): ");
  //asks user for length of the right rectangular prism 
  scanf(" %d", &height);
  // saves height of user to integer length 
  area = AREA(length, width, height);
  printf("The surface area of the right rectangular prism: %d", area);
  // prints surface area of the right rectangular prism 
  return 0;
}