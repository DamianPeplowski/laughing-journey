
#include <stdio.h>

void print_odwrocony(char *s);

int main()
{

  char s[] = "Dzien dobry witam wszystkich bardzo serdecznie";
  print_odwrocony(s);
  printf("\n");

  return 0;
}

void print_odwrocony(char *s)
{
  if (*s != '\0')
  {
 
    print_odwrocony(s + 1);
    printf("%c", *s);
  }
}
