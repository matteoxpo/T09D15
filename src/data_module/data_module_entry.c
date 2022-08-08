#include <stdio.h>
#include <stdlib.h>

#include "../data_libs/data_io.h"
#include "../data_libs/data_stat.h"
#include "data_process.h"
int main() {
  double *data;
  int n;

  if (input(&data, &n)) {
    int result = normalization(data, n);
    if (result == 0) printf("ERROR");
    if (result == 1) output(data, n);
    if (result == 2) printf("n/a");
    free(data);
  } else {
    printf("n/a");
  }
  return 0;
}
