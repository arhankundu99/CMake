# set cmake minimum version (The systems with lower cmake version will get an error while generating the build files)
cmake_minimum_required(VERSION 3.0)

# project command is used to specify the project name and the version of the project.
project(Calculator VERSION 1.0)

# add_excutable command is used to generate the executable. The first parameter is the executable name
# and the rest of the parameters are the source files.
add_executable(calculator
main.cpp
addition.cpp
print_result.cpp)