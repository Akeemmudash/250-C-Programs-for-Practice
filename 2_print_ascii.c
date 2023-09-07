/*
 * A program that prints the ASCII value
 * of a Character
 *
 *
*/
#include <stdio.h>




int main(void)
{
  char character; 

  puts("\n\033[4mCharacter to ASCII Converter\033[0m\n");
  printf("Enter a character: \n");
  scanf("%c", &character);

  printf("The ASCII value of the character '%c' is %d\n", character, character);  
  return (0);
}
