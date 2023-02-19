# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Window_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Window_autogen.dir/ParseCache.txt"
  "Window_autogen"
  )
endif()
