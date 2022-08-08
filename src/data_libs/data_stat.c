#include "data_stat.h"

#include <math.h>
double max(double *data, int n) {
  int m = data[0];
  for (int i = 0; i < n; i++) {
    if (m < data[i]) m = data[i];
  }
  return m;
}
double min(double *data, int n) {
  double m = data[0];
  for (int i = 0; i < n; i++) {
    if (m > data[i]) m = data[i];
  }
  return m;
}
double mean(double *a, int n) {
  double M = 0;
  for (double *p = a; p - a < n; p++) {
    M += (*p) / n;
  }
  return M;
}

double variance(double *a, int n) {
  double M = mean(a, n);
  double D = 0;
  for (double *p = a; p - a < n; p++) D += pow(*p - M, 2) / n;
  return D;
}
