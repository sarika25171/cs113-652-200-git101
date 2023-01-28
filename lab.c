#include <stdio.h>
#include <stdlib.h>

int main()
{
  char level_str[4], year_str[4];
  int level, year;

  printf("school level of student: ");
  fgets(level_str, 4, stdin);

  printf("how many of learning: ");
  fgets(year_str, 4, stdin);

  level = atoi(level_str);
  year = atoi(year_str);

  if (((1<=level && level<=3) && (3<year && year<=12)) || ((4<=level && level<=6) && (0<year && year<= 12))
) {
     printf("YES");
  }
  else {
     printf("NO");
  }
  return 0;
}