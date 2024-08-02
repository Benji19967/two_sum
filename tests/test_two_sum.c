#include "../src/two_sum.h"
#include "../unity/src/unity.h"

void setUp(void) {
  // set stuff up here
}

void tearDown(void) {
  // clean stuff up here
}

void test_two_sum_empty_input() {
  int nums[] = {};
  Pair indexes = two_sum(nums, 0, 14);
  TEST_ASSERT_EQUAL_INT(-1, indexes.value_1);
  TEST_ASSERT_EQUAL_INT(-1, indexes.value_2);
}

void test_two_sum() {
  int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  Pair indexes = two_sum(nums, 10, 14);
  TEST_ASSERT_EQUAL_INT(5, indexes.value_1);
  TEST_ASSERT_EQUAL_INT(7, indexes.value_2);
}

void test_two_sum_no_solution() {
  int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  Pair indexes = two_sum(nums, 10, 99);
  TEST_ASSERT_EQUAL_INT(-1, indexes.value_1);
  TEST_ASSERT_EQUAL_INT(-1, indexes.value_2);
}

void test_two_sum_first_valid_solution() {
  int nums[] = {1, 2, 8, 4, 5, 6, 7, 8, 9, 10};
  Pair indexes = two_sum(nums, 10, 14);
  TEST_ASSERT_EQUAL_INT(2, indexes.value_1);
  TEST_ASSERT_EQUAL_INT(5, indexes.value_2);
}

void test_two_sum_identical_values() {
  int nums[] = {1, 2, 3, 4, 5, 7, 7, 7, 9, 10};
  Pair indexes = two_sum(nums, 10, 14);
  TEST_ASSERT_EQUAL_INT(5, indexes.value_1);
  TEST_ASSERT_EQUAL_INT(6, indexes.value_2);
}

void test_two_sum_negative_values() {
  int nums[] = {-5, 1, 10};
  Pair indexes = two_sum(nums, 3, 5);
  TEST_ASSERT_EQUAL_INT(0, indexes.value_1);
  TEST_ASSERT_EQUAL_INT(2, indexes.value_2);
}

void test_two_sum_negative_target() {
  int nums[] = {-5, -3, 1};
  Pair indexes = two_sum(nums, 3, -8);
  TEST_ASSERT_EQUAL_INT(0, indexes.value_1);
  TEST_ASSERT_EQUAL_INT(1, indexes.value_2);
}

int main(void) {
  UNITY_BEGIN();

  RUN_TEST(test_two_sum_empty_input);
  RUN_TEST(test_two_sum);
  RUN_TEST(test_two_sum_no_solution);
  RUN_TEST(test_two_sum_first_valid_solution);
  RUN_TEST(test_two_sum_identical_values);
  RUN_TEST(test_two_sum_negative_values);
  RUN_TEST(test_two_sum_negative_target);

  UNITY_END();

  return 0;
}
