#include <stdio.h>
#include <stdlib.h>  // atoi

#include "two_sum.h"

int main(int argc, char *argv[]) {
  // TWO SUM
  int nums[argc];
  int target = atoi(argv[1]);

  // argv[0] is the program name
  for (int i = 2; i < argc; i++) {
    nums[i - 2] = atoi(argv[i]);
  }

  int num_elements = sizeof(nums) / sizeof(nums[0]);
  Pair result = two_sum(nums, num_elements, target);
  if (result.value_1 == -1) {
    printf("No solution found\n");
    return 0;
  }
  int idx_1 = result.value_1;
  int idx_2 = result.value_2;
  printf("Target: %d\n", target);
  printf("Values: (%d, %d)\n", nums[idx_1], nums[idx_2]);
  printf("Indexes: (%d, %d)\n", idx_1, idx_2);
}
