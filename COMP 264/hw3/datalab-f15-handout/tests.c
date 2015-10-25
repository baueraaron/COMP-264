/* Testing Code */

#include <limits.h>
#include <math.h>

/* Routines used by floation point test code */

/* Convert from bit level representation to floating point number */
float u2f(unsigned u) {
  union {
    unsigned u;
    float f;
  } a;
  a.u = u;
  return a.f;
}

/* Convert from floating point number to bit-level representation */
unsigned f2u(float f) {
  union {
    unsigned u;
    float f;
  } a;
  a.f = f;
  return a.u;
}

int test_bitNor(int x, int y)
{
  return ~(x|y);
}
int test_bitXor(int x, int y)
{
  return x^y;
}
int test_tmax(void) {
  return 0x7FFFFFFF;
}
int test_isNotEqual(int x, int y)
{
  return x != y;
}
int test_copyLSB(int x)
{
  return (x & 0x1) ? -1 : 0;
}
int test_replaceByte(int x, int n, int c)
{
    switch(n) {
    case 0:
      x = (x & 0xFFFFFF00) | c;
      break;
    case 1:
      x = (x & 0xFFFF00FF) | (c << 8);
      break;
    case 2:
      x = (x & 0xFF00FFFF) | (c << 16);
      break;
    default:
      x = (x & 0x00FFFFFF) | (c << 24);
      break;
    }
    return x;
}
int test_isNonNegative(int x) {
  return x >= 0;
}
