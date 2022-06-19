# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/makerdock_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/makerdock_autogen.dir/ParseCache.txt"
  "makerdock_autogen"
  )
endif()
