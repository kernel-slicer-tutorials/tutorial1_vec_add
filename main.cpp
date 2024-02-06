#include <iostream>
#include <vector>
#include <memory>

#include "test.h"

int main(int argc, const char** argv)
{  
  std::vector<float> va(100), vb(100), vc(100);
 
  for(size_t i=0;i<va.size();i++) 
  {
    va[i] = float(i);
    vb[i] = float(i*i);
    vc[i] = 0.0f;
  }

  auto pTest = std::make_shared<Test>();
  pTest->AddVec(va.data(), vb.data(), vc.data(), int(va.size()));

  for(size_t i=0;i<vc.size();i++)
    std::cout << i << ":\t" << vc[i] << std::endl;

  return 0;
}
