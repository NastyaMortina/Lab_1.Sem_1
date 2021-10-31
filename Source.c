#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
  int N = 0, min = 0, max = 0, i = 0, Count = 0, R = 0, u = 0;
  double Sum = 0, * mas = 0, Num = 0;


  do
  {
    int ch = 0;
    printf("N = ");
    Count = scanf_s("d", &N);
    while (ch = getchar() != '\n');
  } 
  while ((Count < 1) || (N < 0) || (N == 0));
  mas = (double*)malloc(N * sizeof(double));
  do
  {
    do
    {
      int ch = 0;
      printf("Min = ");
      Count = scanf_s("d", &min);
      while (ch = getchar() != '\n');
    } while(Count < 1);
    do
    {
      int ch = 0;
      printf("Max = ");
      Count = scanf_s("d", &max);
      while (ch = getchar() != '\n');
    } 
    while (Count < 1);
  } 
  while ((min > max) || (min == max));

  for (i = 0; i < N; i++)
  {
    mas[i] = (((double)rand()) / RAND_MAX) * (max - min) + min;
  }


  for (i = 0; i < N; i++)
  {
    Num = ((mas[i] - trunc(mas[i])) * pow(10, 6));
    R = (int)Num;
    while (R % 10 == 0)
      R = R / 10;
    for (u = 0; u < N; u++)
    {
      if (R == u)
      {
        Sum = Sum - mas[i];
        mas[i] = 0;
      }
    }
  }


  for (i = 0; i < N; i++)
    Sum = Sum + mas[i];


  printf("Sum=%lf\n", Sum);

    return 0;
}