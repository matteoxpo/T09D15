#include "data_process.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int normalization(double *data, int n) {
  int result = 1;
  double max_value = max(data, n);
  double min_value = min(data, n);
  double size = max_value - min_value;
  if (size == 0) result = 2;
  if (fabs(size) < EPS && size != 0) {
    for (int i = 0; i < n; i++) {
      data[i] = (data[i] - min_value) / size;
    }
  } else {
    result = 0;
  }

  return result;
}

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
double max(double *data, int n) {
  int max = data[0];
  for (int i = 0; i < n; i++) {
    if (max < data[i]) max = data[i];
  }
  return max;
}
double min(double *data, int n) {
  double min = data[0];
  for (int i = 0; i < n; i++) {
    if (min > data[i]) min = data[i];
  }
  return min;
}
void output(double *data, int n) {
  for (int i = 0; i < n; i++) {
    if (i != n - 1)
      printf("%.2lf ", data[i]);
    else
      printf("%.2lf", data[i]);
  }
}
