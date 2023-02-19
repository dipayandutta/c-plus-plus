# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/SimpleWindow_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/SimpleWindow_autogen.dir/ParseCache.txt"
  "SimpleWindow_autogen"
  )
endif()
