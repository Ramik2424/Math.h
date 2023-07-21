#include <stdio.h>

#define S21_EPS 1e-15
#define S21_E 2.718281828459045235
#define S21_TAYLOR_ITERATIONS 200
#define S21_DOUBLE_MAX 1.7976931348623157E+308
#define S21_PI 3.14159265358979323846
#define S21_PI_2 1.57079632679
#define S21_PI_3 1.0471975512
#define S21_PI_4 0.7853981633
#define S21_PI_6 0.5235987755

#define S21_NAN 0.0 / 0.0
#define S21_INF 1.0 / 0.0
#define S21_IS_NAN(x) __builtin_isnan(x)
#define S21_IS_INF(x) __builtin_isinf_sign(x)

int s21_abs(int x);

long double s21_acos(double x);

long double s21_asin(double x);

long double s21_atan(double x);

long double s21_ceil(double x);

long double s21_cos(double x);

long double s21_exp(double x);

long double s21_sin(double x);

long double s21_floor(double x);

long double s21_fabs(double x);

long double s21_fmod(double x, double y);

long double s21_log(double x);

long double s21_pow(double base, double exp);

long double s21_sqrt(double x);

long double s21_tan(double x);
