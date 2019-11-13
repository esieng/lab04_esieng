#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

bool isEven(int x);

int countEvens(int a[], int size) {
  int count = 0;
  for(int i=0; i<size; i++){
	  if(isEven(a[i]) == true)
		  count++;
  }
  return count;
}
