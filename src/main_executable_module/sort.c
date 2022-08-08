#include <stdio.h>

void swap(double *a, int i) {
  double temp = *(a + i);
  *(a + i) = *(a + i + 1);
  *(a + i + 1) = temp;
}

void sort(double *a, int n) {
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n - 1; j++)
      if (*(a + j) > *(a + j + 1)) swap(a, j);
}
