// TYPE OF ESCAPE SEQUENCES escapesequences.c

#include<stdio.h>
int main()
{
  double ch;
  scanf("%lf",&ch);
  printf("\%lf" ,&ch); //  \ is for beepsound .
  printf("Hello\b\bWorld"); // \b for blackspace
  
  printf("\bHELLO\fMR DJ"); //\f is for formfeed for page break 
   printf("\bHello\rWworld"); //\r carriage return //The carriage return, represented by the escape sequence \r in the C programming language, is a control character that resets the cursor position to the beginning of the current line. It doesn't erase any characters but simply moves the cursor to the start of the line. The string "Hello" is printed first, then the carriage return moves the cursor back to the beginning of the line, and "World" is printed, overwriting "Hello."
   
   
   printf("\\"); // is for blackslash
   printf(" \bWHAT\?"); //? is for question mark
  
  return 0;
}