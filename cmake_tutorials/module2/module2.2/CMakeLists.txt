# set cmake minimum version (The systems with lower cmake version will get an error while generating the build files)
cmake_minimum_required(VERSION 3.0)

# project command is used to specify the project name and the version of the project.
project(Calculator VERSION 1.0)

# add_library command is used to make a library (library name can have .a, .lib, .so, .dll etc as extension according to the platform)
# the first parameter is the library name and the rest of the parameters are the source files for the library.
add_library(math_operations
addition.cpp)

add_library(print_operations
print_result.cpp)

# add_excutable command is used to generate the executable. The first parameter is the executable name
# and the rest of the parameters are the source files required for linking. Now that we have to link the 2 libraries
# created above, we have to do so using target_link_libraries command and remove the source files for addition.cpp and print_result.cpp
add_executable(calculator
main.cpp)

# target_link_libraries command is used to link the libraries with the generated executable. The first parameter is the executable name
# and the rest of the parameters are the library names
target_link_libraries(calculator
math_operations
print_operations)

# NOTE: Learn about libraries (shared, dynamic etc)
