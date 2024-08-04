#include "two_sum.h"

#include <stdio.h>
#include <stdlib.h>  // malloc and free, atoi

Pair Pair_new(int value_1, int value_2) {
  Pair pair;
  pair.value_1 = value_1;
  pair.value_2 = value_2;
  return pair;
}

Pair sorted_pair(Pair pair) {
  if (pair.value_1 > pair.value_2) {
    return Pair_new(pair.value_2, pair.value_1);
  }
  return pair;
}

/*
 * Return indexes of 2 elements that sum up to target, if found.
 */
Pair two_sum(int nums[], int num_elements, int target) {
  int num_buckets = 100;
  Hashmap *seen = hashmap_new(num_buckets);

  for (int i = 0; i < num_elements; i++) {
    int complement = target - nums[i];
    HashmapKV *element = hashmap_get(seen, complement);
    if (element != NULL) {
      return sorted_pair(Pair_new(i, element->value));
    }
    hashmap_insert(seen, nums[i], i);
  }
  free(seen);
  return Pair_new(-1, -1);
}
