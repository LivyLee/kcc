/*
   20100316-1.c from the execute part of the gcc torture tests.
 */

#include <testfwk.h>

#ifdef SDCC
#pragma std_c99
#endif

struct Foo {
  int i;
  unsigned precision : 10;
  unsigned blah : 3;
} f;

int
foo (struct Foo *p)
{
  struct Foo *q = p;
  return (*q).precision;
}

void
testTortureExecute (void)
{
  f.i = -1;
  f.precision = 0;
  f.blah = -1;
  if (foo (&f) != 0)
    ASSERT (0);
  return;
}
