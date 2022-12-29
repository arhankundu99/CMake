# This CMake will be executed by the top level CMake because it has the add_subdirectory command which executes the CMake inside the mentioned path

# create the library
add_library(print_operations
src/print_result.cpp)

# in print_result.cpp, we included "print_result.h" which is in another folder. To include the header file without the relative path, we can use target_include_directories
# This command takes in the target name, the scope (private, public or interface) and the rest of the parameters are the directory names.
# All the header files present in the TOP level in the specified directories can now be included without the relative path 
target_include_directories(print_operations
PUBLIC
include)