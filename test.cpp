#include <iostream>
#include <vector>
#include <memory>

#include "test.h"

void Test::kernel1D_add(const float* a, const float* b, float* res, int N) 
{
  for(int i=0;i<N;i++)
    res[i] = a[i] + b[i];
} 
	
void Test::AddVec(const float* a, const float* b, float* res, int N) 
{
	kernel1D_add(a,b,res,N); 
}	
