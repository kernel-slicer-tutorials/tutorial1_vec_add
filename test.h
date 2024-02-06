#pragma once

class Test 
{	
public:
  Test(){}
  virtual void CommitDeviceData(){}
  virtual void GetExecutionTime(const char* a_funcName, float a_out[4]){}

  virtual void kernel1D_add(const float* a, const float* b, float* res, int N); 
  virtual void AddVec(const float* a [[size("N")]], const float* b [[size("N")]], float* res [[size("N")]], int N);
};
