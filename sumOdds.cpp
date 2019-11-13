#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

bool isOdd(int x);

int sumOdds(int a[], int size) {
  int sum = 0;
  for(int i=0; i<size; i++){
	  if(isOdd(a[i])==true)
		  sum+=a[i];
  }
  return sum;
}
