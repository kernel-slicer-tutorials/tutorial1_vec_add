cmake_minimum_required(VERSION 3.10)

project(test_vadd)

#find_package(Vulkan)
#
#  if(CMAKE_SYSTEM_NAME STREQUAL Windows)
#    set(VOLK_STATIC_DEFINES VK_USE_PLATFORM_WIN32_KHR)
#  elseif(CMAKE_SYSTEM_NAME STREQUAL Linux)
#    set(VOLK_STATIC_DEFINES VK_USE_PLATFORM_XLIB_KHR)
#  elseif(CMAKE_SYSTEM_NAME STREQUAL Darwin)
#    set(VOLK_STATIC_DEFINES VK_USE_PLATFORM_MACOS_MVK)
#  endif()
#
#  add_subdirectory(external/volk)
#
#  add_compile_definitions(USE_VOLK)
#  add_compile_definitions(USE_VULKAN)
#  
#  include_directories(${Vulkan_INCLUDE_DIR})
#
#  include_directories("external/LiteMath"
#                      "external/vkutils"
#                      "external/volk")
#                    
#  link_directories("../volk")
#
#
#include_directories(".")
#if(WIN32)
#  link_directories(${ADDITIONAL_LIBRARY_DIRS})
#endif()

#uncomment this to detect broken memory problems via gcc sanitizers
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fsanitize-address-use-after-scope -fno-omit-frame-pointer -fsanitize=leak -fsanitize=undefined -fsanitize=bounds-strict")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-attributes")

add_executable(test_vadd main.cpp
                         test.cpp)

                         #main_generated.cpp
                         #main_generated_ds.cpp
                         #main_generated_init.cpp  
                         #
                         #external/vkutils/vk_utils.cpp
                         #external/vkutils/vk_copy.cpp
                         #external/vkutils/vk_context.cpp
                         #external/vkutils/vk_alloc_simple.cpp
                         #external/vkutils/vk_buffers.cpp
                         #external/vkutils/vk_images.cpp
                         #external/vkutils/vk_pipeline.cpp
                         #external/vkutils/vk_descriptor_sets.cpp)

#set_target_properties(test_vadd PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}")
#target_link_libraries(test_vadd LINK_PUBLIC ${Vulkan_LIBRARY} volk dl)                         
