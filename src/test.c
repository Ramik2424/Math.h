#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "s21_math.h"

// Тесты для функции abs
START_TEST(test_abs_1) {
  int result = s21_abs(5);
  ck_assert_int_eq(result, abs(5));
}
END_TEST

START_TEST(test_abs_2) {
  int result = s21_abs(0);
  ck_assert_int_eq(result, abs(0));
}
END_TEST

START_TEST(test_abs_3) {
  int result = s21_abs(-10);
  ck_assert_int_eq(result, abs(-10));
}
END_TEST

START_TEST(test_abs_NAN) {
  long double result = s21_abs(0);
  ck_assert_int_eq(result, abs(0));
}
END_TEST

// Тесты для функции acos
START_TEST(test_acos_1) {
  long double result = s21_acos(0.707106);
  ck_assert_int_eq(result, acos(0.707106));
}
END_TEST

START_TEST(test_acos_2) {
  long double result = s21_acos(-0.35498);
  ck_assert_int_eq(result, acos(-0.35498));
}
END_TEST

START_TEST(test_acos_3) {
  long double result = s21_acos(1);
  ck_assert_int_eq(result, acos(1));
}
END_TEST

START_TEST(test_acos_4) {
  long double result = s21_acos(-1);
  ck_assert_int_eq(result, acos(-1));
}
END_TEST

START_TEST(test_acos_NAN) {
  long double result = s21_acos(0);
  ck_assert_int_eq(result, acos(0));
}
END_TEST

// Тесты для функции asin
START_TEST(test_asin_1) {
  long double result = s21_asin(0.5);
  ck_assert_int_eq(result, asin(0.5));
}
END_TEST

START_TEST(test_asin_2) {
  long double result = s21_asin(-0.635401);
  ck_assert_int_eq(result, asin(-0.635401));
}
END_TEST

START_TEST(test_asin_3) {
  long double result = s21_asin(1);
  ck_assert_int_eq(result, asin(1));
}
END_TEST

START_TEST(test_asin_4) {
  long double result = s21_asin(0);
  ck_assert_int_eq(result, asin(0));
}
END_TEST

START_TEST(test_asin_NAN) {
  long double result = s21_asin(S21_NAN);
  ck_assert_int_eq(result, asin(S21_NAN));
}
END_TEST

START_TEST(test_asin_INF) {
  long double result = s21_asin(S21_INF);
  ck_assert_int_eq(result, asin(S21_INF));
}
END_TEST

// Тесты для функции atan
START_TEST(test_atan_1) {
  long double result = s21_atan(1);
  ck_assert_int_eq(result, atan(1));
}
END_TEST

START_TEST(test_atan_2) {
  long double result = s21_atan(9999);
  ck_assert_int_eq(result, atan(9999));
}
END_TEST

START_TEST(test_atan_3) {
  long double result = s21_atan(-9999);
  ck_assert_int_eq(result, atan(-9999));
}
END_TEST

START_TEST(test_atan_4) {
  long double result = s21_atan(-0.5);
  ck_assert_int_eq(result, atan(-0.5));
}
END_TEST

START_TEST(test_atan_5) {
  long double result = s21_atan(-1);
  ck_assert_int_eq(result, atan(-1));
}
END_TEST

START_TEST(test_atan_NAN) {
  long double result = s21_atan(S21_NAN);
  ck_assert_int_eq(result, atan(S21_NAN));
}
END_TEST

START_TEST(test_atan_uINF) {
  long double result = s21_atan(-S21_INF);
  ck_assert_int_eq(result, atan(-S21_INF));
}
END_TEST

START_TEST(test_atan_INF) {
  long double result = s21_atan(S21_INF);
  ck_assert_int_eq(result, atan(S21_INF));
}
END_TEST

// Тесты для функции ceil
START_TEST(test_ceil_1) {
  long double result = s21_ceil(5.2);
  ck_assert_int_eq(result, ceil(5.2));
}
END_TEST

START_TEST(test_ceil_2) {
  long double result = s21_ceil(-3.7);
  ck_assert_int_eq(result, ceil(-3.7));
}
END_TEST

START_TEST(test_ceil_NAN) {
  long double result = s21_ceil(S21_NAN);
  ck_assert_int_eq(result, ceil(S21_NAN));
}
END_TEST

START_TEST(test_ceil_uINF) {
  long double result = s21_ceil(-S21_INF);
  ck_assert_int_eq(result, ceil(-S21_INF));
}
END_TEST

START_TEST(test_ceil_INF) {
  long double result = s21_ceil(S21_INF);
  ck_assert_int_eq(result, ceil(S21_INF));
}
END_TEST

// Тесты для функции cos
START_TEST(test_cos_1) {
  long double result = s21_cos(1);
  ck_assert_int_eq(result, cos(1));
}
END_TEST

START_TEST(test_cos_2) {
  long double result = s21_cos(0.5);
  ck_assert_int_eq(result, cos(0.5));
}
END_TEST

START_TEST(test_cos_NAN) {
  long double result = s21_cos(S21_NAN);
  ck_assert_int_eq(result, cos(S21_NAN));
}
END_TEST

// Тесты для функции exp
START_TEST(test_exp_1) {
  long double result = s21_exp(2);
  ck_assert_int_eq(result, exp(2));
}
END_TEST

START_TEST(test_exp_2) {
  long double result = s21_exp(0);
  ck_assert_int_eq(result, exp(0));
}
END_TEST

START_TEST(test_exp_3) {
  long double result = s21_exp(-15);
  ck_assert_int_eq(result, exp(-15));
}
END_TEST

START_TEST(test_exp_4) {
  long double result = s21_exp(9999);
  ck_assert_int_eq(result, exp(9999));
}
END_TEST

START_TEST(test_exp_NAN) {
  long double result = s21_exp(S21_NAN);
  ck_assert_int_eq(result, exp(S21_NAN));
}
END_TEST

START_TEST(test_exp_INF) {
  long double result = s21_exp(S21_INF);
  ck_assert_int_eq(result, exp(S21_INF));
}
END_TEST

// Тесты для функции sin
START_TEST(test_sin_1) {
  long double result = s21_sin(1);
  ck_assert_int_eq(result, sin(1));
}
END_TEST

START_TEST(test_sin_2) {
  long double result = s21_sin(0);
  ck_assert_int_eq(result, sin(0));
}
END_TEST

START_TEST(test_sin_NAN) {
  long double result = s21_sin(S21_NAN);
  ck_assert_int_eq(result, sin(S21_NAN));
}
END_TEST

// Тесты для функции floor
START_TEST(test_floor_1) {
  long double result = s21_floor(5.7);
  ck_assert_int_eq(result, floor(5.7));
}
END_TEST

START_TEST(test_floor_2) {
  long double result = s21_floor(-3.2);
  ck_assert_int_eq(result, floor(-3.2));
}
END_TEST

START_TEST(test_floor_NAN) {
  long double result = s21_floor(S21_NAN);
  ck_assert_int_eq(result, floor(S21_NAN));
}
END_TEST

START_TEST(test_floor_INF) {
  long double result = s21_floor(S21_INF);
  ck_assert_int_eq(result, floor(S21_INF));
}
END_TEST

START_TEST(test_floor_uINF) {
  long double result = s21_floor(-S21_INF);
  ck_assert_int_eq(result, floor(-S21_INF));
}
END_TEST

// Тесты для функции fabs
START_TEST(test_fabs_1) {
  long double result = s21_fabs(-3.14);
  ck_assert_int_eq(result, fabs(-3.14));
}
END_TEST

START_TEST(test_fabs_2) {
  long double result = s21_fabs(0);
  ck_assert_int_eq(result, fabs(0.0));
}
END_TEST

START_TEST(test_fabs_NAN) {
  long double result = s21_fabs(S21_NAN);
  ck_assert_int_eq(result, fabs(S21_NAN));
}
END_TEST

START_TEST(test_fabs_3) {
  long double result = s21_fabs(-0.1);
  ck_assert_int_eq(result, fabs(-0.1));
}
END_TEST

START_TEST(test_fabs_INF) {
  long double result = s21_fabs(S21_INF);
  ck_assert_int_eq(result, fabs(S21_INF));
}
END_TEST

// Тесты для функции fmod
START_TEST(test_fmod_1) {
  long double result = s21_fmod(7, 3);
  ck_assert_int_eq(result, fmod(7, 3));
}
END_TEST

START_TEST(test_fmod_2) {
  long double result = s21_fmod(-5.8, 2.3);
  ck_assert_int_eq(result, fmod(-5.8, 2.3));
}
END_TEST

START_TEST(test_fmod_NAN) {
  long double result = s21_fmod(S21_NAN, S21_NAN);
  ck_assert_int_eq(result, fmod(S21_NAN, S21_NAN));
}
END_TEST

START_TEST(test_fmod_INF) {
  long double result = s21_fmod(1, S21_INF);
  ck_assert_int_eq(result, fmod(1, S21_INF));
}
END_TEST

// Тесты для функции log
START_TEST(test_log_1) {
  long double result = s21_log(1);
  ck_assert_int_eq(result, log(1));
}
END_TEST

START_TEST(test_log_2) {
  long double result = s21_log(7.38906);
  ck_assert_int_eq(result, log(7.38906));
}
END_TEST

START_TEST(test_log_3) {
  long double result = s21_log(0.24);
  ck_assert_int_eq(result, log(0.24));
}
END_TEST

START_TEST(test_log_4) {
  long double result = s21_log(0);
  ck_assert_int_eq(result, log(0));
}
END_TEST

START_TEST(test_log_NAN) {
  long double result = s21_log(S21_NAN);
  ck_assert_int_eq(result, log(S21_NAN));
}
END_TEST

START_TEST(test_log_INF) {
  long double result = s21_log(S21_INF);
  ck_assert_int_eq(result, log(S21_INF));
}
END_TEST

// Тесты для функции pow
START_TEST(test_pow_1) {
  long double result = s21_pow(2, 1);
  ck_assert_int_eq(result, pow(2, 1));
}
END_TEST

START_TEST(test_pow_2) {
  long double result = s21_pow(2, -2);
  ck_assert_int_eq(result, pow(2, -2));
}
END_TEST

START_TEST(test_pow_3) {
  long double result = s21_pow(5, 0);
  ck_assert_int_eq(result, pow(5, 0));
}
END_TEST

START_TEST(test_pow_4) {
  long double result = s21_pow(-2, 10);
  ck_assert_int_eq(result, pow(-2, 10));
}
END_TEST

START_TEST(test_pow_5) {
  long double result = s21_pow(0, 3);
  ck_assert_int_eq(result, pow(0, 3));
}
END_TEST

START_TEST(test_pow_6) {
  long double result = s21_pow(1, 100);
  ck_assert_int_eq(result, pow(1, 100));
}
END_TEST

// Тесты для функции sqrt
START_TEST(test_sqrt_1) {
  long double result = s21_sqrt(4);
  ck_assert_int_eq(result, sqrt(4));
}
END_TEST

START_TEST(test_sqrt_NAN) {
  long double result = s21_sqrt(-4);
  ck_assert_int_eq(result, sqrt(-4));
}
END_TEST

START_TEST(test_sqrt_EPS) {
  long double result = s21_sqrt(S21_EPS / 2);
  ck_assert_int_eq(result, sqrt(S21_EPS / 2));
}
END_TEST

START_TEST(test_sqrt_2) {
  long double result = s21_sqrt(0);
  ck_assert_int_eq(result, sqrt(0));
}
END_TEST

// Тесты для функции tan
START_TEST(test_tan_1) {
  long double result = s21_tan(1);
  ck_assert_int_eq(result, tan(1));
}
END_TEST

START_TEST(test_tan_NAN) {
  long double result = s21_tan(0);
  ck_assert_int_eq(result, tan(0));
}
END_TEST

// Создание набора тестов
Suite *s21_mathSuite(void) {
  Suite *suite = suite_create("s21_math");

  // Создание тестового набора для функции abs
  TCase *tc_abs = tcase_create("abs");
  tcase_add_test(tc_abs, test_abs_NAN);
  tcase_add_test(tc_abs, test_abs_1);
  tcase_add_test(tc_abs, test_abs_2);
  tcase_add_test(tc_abs, test_abs_3);
  suite_add_tcase(suite, tc_abs);

  // Создание тестового набора для функции acos
  TCase *tc_acos = tcase_create("acos");
  tcase_add_test(tc_abs, test_acos_NAN);
  tcase_add_test(tc_acos, test_acos_1);
  tcase_add_test(tc_acos, test_acos_2);
  tcase_add_test(tc_acos, test_acos_3);
  tcase_add_test(tc_acos, test_acos_4);
  suite_add_tcase(suite, tc_acos);

  // Создание тестового набора для функции asin
  TCase *tc_asin = tcase_create("asin");
  tcase_add_test(tc_abs, test_asin_NAN);
  tcase_add_test(tc_abs, test_asin_INF);
  tcase_add_test(tc_asin, test_asin_1);
  tcase_add_test(tc_asin, test_asin_2);
  tcase_add_test(tc_asin, test_asin_3);
  tcase_add_test(tc_asin, test_asin_4);
  suite_add_tcase(suite, tc_asin);

  // Создание тестового набора для функции atan
  TCase *tc_atan = tcase_create("atan");
  tcase_add_test(tc_abs, test_atan_NAN);
  tcase_add_test(tc_abs, test_atan_INF);
  tcase_add_test(tc_abs, test_atan_uINF);
  tcase_add_test(tc_atan, test_atan_1);
  tcase_add_test(tc_atan, test_atan_2);
  tcase_add_test(tc_atan, test_atan_3);
  tcase_add_test(tc_atan, test_atan_4);
  tcase_add_test(tc_atan, test_atan_5);
  suite_add_tcase(suite, tc_atan);

  // Создание тестового набора для функции ceil
  TCase *tc_ceil = tcase_create("ceil");
  tcase_add_test(tc_abs, test_ceil_NAN);
  tcase_add_test(tc_abs, test_ceil_INF);
  tcase_add_test(tc_abs, test_ceil_uINF);
  tcase_add_test(tc_ceil, test_ceil_1);
  tcase_add_test(tc_ceil, test_ceil_2);
  suite_add_tcase(suite, tc_ceil);

  // Создание тестового набора для функции cos
  TCase *tc_cos = tcase_create("cos");
  tcase_add_test(tc_abs, test_cos_NAN);
  tcase_add_test(tc_cos, test_cos_1);
  tcase_add_test(tc_cos, test_cos_2);
  suite_add_tcase(suite, tc_cos);

  // Создание тестового набора для функции exp
  TCase *tc_exp = tcase_create("exp");
  tcase_add_test(tc_abs, test_exp_NAN);
  tcase_add_test(tc_abs, test_exp_INF);
  tcase_add_test(tc_exp, test_exp_1);
  tcase_add_test(tc_exp, test_exp_2);
  tcase_add_test(tc_exp, test_exp_3);
  tcase_add_test(tc_exp, test_exp_4);
  suite_add_tcase(suite, tc_exp);

  // Создание тестового набора для функции sin
  TCase *tc_sin = tcase_create("sin");
  tcase_add_test(tc_abs, test_sin_NAN);
  tcase_add_test(tc_sin, test_sin_1);
  tcase_add_test(tc_sin, test_sin_2);
  suite_add_tcase(suite, tc_sin);

  // Создание тестового набора для функции floor
  TCase *tc_floor = tcase_create("floor");
  tcase_add_test(tc_abs, test_floor_NAN);
  tcase_add_test(tc_abs, test_floor_INF);
  tcase_add_test(tc_abs, test_floor_uINF);
  tcase_add_test(tc_floor, test_floor_1);
  tcase_add_test(tc_floor, test_floor_2);
  suite_add_tcase(suite, tc_floor);

  // Создание тестового набора для функции fabs
  TCase *tc_fabs = tcase_create("fabs");
  tcase_add_test(tc_abs, test_fabs_NAN);
  tcase_add_test(tc_abs, test_fabs_INF);
  tcase_add_test(tc_fabs, test_fabs_1);
  tcase_add_test(tc_fabs, test_fabs_2);
  tcase_add_test(tc_fabs, test_fabs_3);
  suite_add_tcase(suite, tc_fabs);

  // Создание тестового набора для функции fmod
  TCase *tc_fmod = tcase_create("fmod");
  tcase_add_test(tc_abs, test_fmod_NAN);
  tcase_add_test(tc_fmod, test_fmod_INF);
  tcase_add_test(tc_fmod, test_fmod_1);
  tcase_add_test(tc_fmod, test_fmod_2);
  suite_add_tcase(suite, tc_fmod);

  // Создание тестового набора для функции sqrt
  TCase *tc_sqrt = tcase_create("sqrt");
  tcase_add_test(tc_sqrt, test_sqrt_1);
  tcase_add_test(tc_sqrt, test_sqrt_2);
  tcase_add_test(tc_sqrt, test_sqrt_NAN);
  tcase_add_test(tc_sqrt, test_sqrt_EPS);
  suite_add_tcase(suite, tc_sqrt);

  // Создание тестового набора для функции log
  TCase *tc_log = tcase_create("log");
  tcase_add_test(tc_abs, test_log_NAN);
  tcase_add_test(tc_abs, test_log_INF);
  tcase_add_test(tc_log, test_log_1);
  tcase_add_test(tc_log, test_log_2);
  tcase_add_test(tc_log, test_log_3);
  tcase_add_test(tc_abs, test_log_4);
  suite_add_tcase(suite, tc_log);

  // Создание тестового набора для функции pow
  TCase *tc_pow = tcase_create("pow");
  tcase_add_test(tc_pow, test_pow_1);
  tcase_add_test(tc_pow, test_pow_2);
  tcase_add_test(tc_pow, test_pow_3);
  tcase_add_test(tc_pow, test_pow_4);
  tcase_add_test(tc_pow, test_pow_5);
  tcase_add_test(tc_pow, test_pow_6);
  suite_add_tcase(suite, tc_pow);

  // Создание тестового набора для функции tan
  TCase *tc_tan = tcase_create("tan");
  tcase_add_test(tc_abs, test_tan_NAN);
  tcase_add_test(tc_tan, test_tan_1);
  tcase_add_test(tc_tan, test_tan_NAN);
  suite_add_tcase(suite, tc_tan);

  return suite;
}

int main(void) {
  Suite *suite = s21_mathSuite();
  SRunner *runner = srunner_create(suite);
  srunner_set_fork_status(runner, CK_NOFORK);
  srunner_run_all(runner, CK_VERBOSE);
  int counted_errors = srunner_ntests_failed(runner);
  srunner_free(runner);

  return counted_errors == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}
