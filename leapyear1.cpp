#include <stdio.h>
int main()
{
  int year;
  scanf("%d", &year);
  if (year % 4 == 0)
    if (year % 100 == 0)   //Refine  �ع� 
      printf("%d �겻������\n", year);
    else if (year % 400 == 0)
      printf("%d ���������\n", year);
    else
      printf("%d �겻������\n", year);
  else
    printf("%d �겻������\n", year);
  return 0;
}
