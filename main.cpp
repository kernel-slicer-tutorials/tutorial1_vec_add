#include <iostream>
#include <vector>
#include <memory>

#include "test.h"

#ifdef USE_VULKAN
#include "vk_context.h"
std::shared_ptr<Test> CreateTest_GPU(vk_utils::VulkanContext a_ctx, size_t a_maxThreadsGenerated);
#endif

int main(int argc, const char** argv)
{  
  std::vector<float> va(100), vb(100), vc(100);
 
  for(size_t i=0;i<va.size();i++) 
  {
    va[i] = float(i);
    vb[i] = float(i*i);
    vc[i] = 0.0f;
  }

  std::shared_ptr<Test> pTest = nullptr;

  #ifdef USE_VULKAN
  bool onGPU = true; // TODO: you can read it from command line
  if(onGPU)
  {
    auto ctx = vk_utils::globalContextGet(true, 0);
    pTest    = CreateTest_GPU(ctx, va.size());
  }
  else
  #endif
    pTest = std::make_shared<Test>();

  pTest->AddVec(va.data(), vb.data(), vc.data(), int(va.size()));

  for(size_t i=0;i<vc.size();i++)
    std::cout << i << ":\t" << vc[i] << std::endl;

  return 0;
}
