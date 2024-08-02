#include "../data_structures/ds_c/src/hashmap.h"

typedef struct Pair {
  int value_1;
  int value_2;
} Pair;

Pair two_sum(int nums[], int num_elements, int target);
