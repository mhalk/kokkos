#include <omp.h>

int main(int argc, char** argv)
{
  int thr = omp_get_num_threads();
  return 0;
}

