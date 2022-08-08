#include <stdio.h>

#include "../data_libs/data_io.h"
#include "../data_libs/data_stat.h"
#include "decision.h"

int main() {
  double *data;
  int n;
  if (input(&data, &n)) {
    if (make_decision(data, n))
      printf("YES");
    else
      printf("NO");
  } else {
    printf("n/a");
  }
}
