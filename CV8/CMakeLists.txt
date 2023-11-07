# CMakeList.txt : CMake project for CV8, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (CV8 "CV8.cpp" "CV8.h" "prunik.h" "prunik.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CV8 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
