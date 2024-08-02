#include "../src/two_sum.h"
#include "../unity/src/unity.h"

void setUp(void) {
  // set stuff up here
}

void tearDown(void) {
  // clean stuff up here
}

void test_two_sum() {
  int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  Pair indexes = two_sum(nums, 10, 14);
  TEST_ASSERT_EQUAL_INT(6, indexes.value_1);
  TEST_ASSERT_EQUAL_INT(8, indexes.value_2);
}

int main(void) {
  UNITY_BEGIN();

  RUN_TEST(test_two_sum);

  UNITY_END();

  return 0;
}
