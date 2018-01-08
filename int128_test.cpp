// Copyright 2011 Jike.com  All Rights Reserved.
// Author: wangmeng@jike.com (Meng Wang)
#include <stdio.h>
#include <assert.h>
int main() {
  // __int128
  __int128 first = 10;
  __int128 second = 11;
  // typeof 
  typeof(first) res = first + second;
  printf("%lld\n", res);
  // conditionals with omitted operands
  printf("%lld", first ? : second);
  res = first ? : second;
  assert(res == first);
  first = 0;
  res = first ? : second;
  assert(res == second);
  return 0;
}

/* vim: set expandtab ts=2 sw=2 sts=2 tw=80: */
