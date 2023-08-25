#include <check.h>

#include "../calc.h"

#define EPS 1e-4

START_TEST(calc_test_1) {
  char src[100] = "4^acos(1.2/4)/tan(2*1.2)";
  double res = 0.0;
  int result = compute_line(src, &res, 0);
  double real_result = -6.31492;
  ck_assert_msg(fabs(res - real_result) <= EPS, "test-1 failed");
  ck_assert_int_eq(result, OK);
}
END_TEST

START_TEST(calc_test_2) {
  char src[100] = "2+2";
  double res = 0.0;
  int result = compute_line(src, &res, 0);
  double real_result = 4;
  ck_assert_msg(fabs(res - real_result) <= EPS, "test-2 failed");
  ck_assert_int_eq(result, OK);
}
END_TEST

START_TEST(calc_test_3) {
  char src[100] = "123+0.456";
  double res = 0.0;
  int result = compute_line(src, &res, 0);
  double real_result = 123.456;
  ck_assert_msg(fabs(res - real_result) <= EPS, "test-3 failed");
  ck_assert_int_eq(result, OK);
}
END_TEST

START_TEST(calc_test_4) {
  char src[100] = "log(-2)";
  double res = 0.0;
  int result = compute_line(src, &res, 0);
  double real_result = NAN;
  ck_assert_msg(isnan(res) && isnan(real_result), "test-4 failed");
  ck_assert_int_eq(result, OK);
}
END_TEST

START_TEST(calc_test_5) {
  char src[100] = "-(-1)";
  double res = 0.0;
  int result = compute_line(src, &res, 0);
  double real_result = 1;
  ck_assert_msg(res == real_result, "test-5 failed");
  ck_assert_int_eq(result, OK);
}
END_TEST

START_TEST(calc_test_6) {
  char src[100] = "cos(10 % 2.2)";
  double res = 0.0;
  int result = compute_line(src, &res, 0);
  double real_result = 0.362358;
  ck_assert_msg(fabs(res - real_result) <= EPS, "test-6 failed");
  ck_assert_int_eq(result, OK);
}
END_TEST

START_TEST(calc_test_7) {
  char src[100] = "sqrt(ln(10))";
  double res = 0.0;
  int result = compute_line(src, &res, 0);
  double real_result = 1.517427;
  ck_assert_msg(fabs(res - real_result) <= EPS, "test-7 failed");
  ck_assert_int_eq(result, OK);
}
END_TEST

START_TEST(calc_test_8) {
  char src[100] = "atan(10)+sin(10)";
  double res = 0.0;
  int result = compute_line(src, &res, 0);
  double real_result = 0.92710;
  ck_assert_msg(fabs(res - real_result) <= EPS, "test-8 failed");
  ck_assert_int_eq(result, OK);
}
END_TEST

START_TEST(calc_test_9) {
  char src[100] = "asin(1)";
  double res = 0.0;
  int result = compute_line(src, &res, 0);
  double real_result = 1.570796;
  ck_assert_msg(fabs(res - real_result) <= EPS, "test-9 failed");
  ck_assert_int_eq(result, OK);
}
END_TEST

START_TEST(calc_test_10) {
  char src[100] = "10-20*(-10)";
  double res = 0.0;
  int result = compute_line(src, &res, 0);
  double real_result = 210;
  ck_assert_msg(fabs(res - real_result) <= EPS, "test-10 failed");
  ck_assert_int_eq(result, OK);
}
END_TEST

START_TEST(calc_test_11) {
  char src[100] = "-(o(i(a(10.01)*n(2))/10m2))^q(5)";
  double res = 0.0;
  int result = compute_line(src, &res, 0);
  ck_assert(res == 0.0);
  ck_assert_int_eq(result, ERROR);
}
END_TEST

START_TEST(calc_test_12) {
  char src[100] = ")(s(2)";
  double res = 0.0;
  int result = compute_line(src, &res, 0);
  ck_assert(res == 0.0);
  ck_assert_int_eq(result, ERROR);
}
END_TEST

START_TEST(calc_test_13) {
  char src[100] = ".+m)";
  double res = 0.0;
  int result = compute_line(src, &res, 0);
  ck_assert(res == 0.0);
  ck_assert_int_eq(result, ERROR);
}
END_TEST

START_TEST(calc_test_14) {
  char src[100] = "2 ^ 3 ^ 2";
  double res = 0.0;
  int result = compute_line(src, &res, 0);
  double real_result = 512.0;
  ck_assert(res == real_result);
  ck_assert_int_eq(result, OK);
}
END_TEST

START_TEST(calc_test_15) {
  char src[100] = "4^acos(x/4)/tan(2*x)";

  double x_numbers[3] = {-1.0, 0.0, 1.0};
  double y_numbers[3] = {0.0, 0.0, 0.0};

  int result = compute_graph(src, x_numbers, y_numbers, 3);

  ck_assert_int_eq(result, OK);
  ck_assert(fabs(y_numbers[0] - 5.73301) <= EPS);
  ck_assert(isinf(y_numbers[1]));
  ck_assert(fabs(y_numbers[2] - -2.84528) <= EPS);
}

Suite *SmartCalc(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("Jenningc");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, calc_test_1);
  tcase_add_test(tc_core, calc_test_2);
  tcase_add_test(tc_core, calc_test_3);
  tcase_add_test(tc_core, calc_test_4);
  tcase_add_test(tc_core, calc_test_5);
  tcase_add_test(tc_core, calc_test_6);
  tcase_add_test(tc_core, calc_test_7);
  tcase_add_test(tc_core, calc_test_8);
  tcase_add_test(tc_core, calc_test_9);
  tcase_add_test(tc_core, calc_test_10);
  tcase_add_test(tc_core, calc_test_11);
  tcase_add_test(tc_core, calc_test_12);
  tcase_add_test(tc_core, calc_test_13);
  tcase_add_test(tc_core, calc_test_14);
  tcase_add_test(tc_core, calc_test_15);

  suite_add_tcase(s, tc_core);

  return s;
}

void run_testcase(Suite *testcase) {
  SRunner *sr = srunner_create(testcase);

  putchar('\n');

  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);

  srunner_free(sr);
}

int main() {
  run_testcase(SmartCalc());

  return 0;
}
