# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/texteditorexample_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/texteditorexample_autogen.dir/ParseCache.txt"
  "texteditorexample_autogen"
  )
endif()
