#include "data_io.h"

#include <stdio.h>
#include <stdlib.h>

int input(double **data, int *n) {
  int check = 1;
  char c;
  if (scanf("%d%c", n, &c) == 2 && c != '.') {
    *data = malloc(*n * sizeof(int));
    if (*data != NULL) {
      for (int i = 0; i < *n; i++) {
        double el;
        if (scanf("%lf", &el)) {
          (*data)[i] = el;
        } else {
          check = 0;
          break;
        }
      }
    } else {
      check = 0;
    }
  } else {
    check = 0;
  }
  return check;
}

void output(double *data, int n) {
  for (int i = 0; i < n; i++) {
    if (i != n - 1)
      printf("%.2lf ", data[i]);
    else
      printf("%.2lf", data[i]);
  }
}