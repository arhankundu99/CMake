# Set the CMake minimum version, otherwise, we will get a warning
cmake_minimum_required(VERSION 3.0.0)

# Note that project command is not scriptable. So if we uncomment this line and run this file as a script, we will get an error
# project(CMakeScripting VERSION 1.0)

# set a variable NAME to "Alice". Note that every variable in Cmake is a list of strings.
set(NAME Alice)

# message command is used to print to the console. The ${} is used to derefence the Variable.
message(${NAME}) # Alice

# The below command will just print NAME
message(NAME) # NAME

# Set names to a list of strings
set(NAMES Alice Bob)

# print the NAMES Variable (Note that this print "NAMES". remember that we have to dereference it)
message(NAMES) # NAMES

# print the NAMES Variable. Notice that when we print NAMES, All the strings of the list are concatenated.
message(${NAMES}) # AliceBob

# print the NAMES Variable with quotes. Notice that with quotes, the list is printed with semi colon seperated strings
message("The names are ${NAMES}") # The names are Alice;Bob

# Set the variable name with quotes. Note that now NAMES variable is just a single string (A list of strings with ONE Element)
set(NAMES "Alice Bob")
message(${NAMES}) #Alice Bob
message("${NAMES}") #Alice Bob

# Now set the NAMES variable with quotes and semicolon
set(NAMES "Alice;Bob") # This command is same as set(NAMES Alice Bob)
message(${NAMES}) # AliceBob
message("${NAMES}") # Alice;Bob

# Consider the following commands
set(NAME Alice)
set(Alice Bob)
message("NAME ${NAME} ${${NAME}}") # NAME Alice Bob

# list and string operations
set(VAR a b c;d "e;f" 2.718 "Hello There")

# The above list has 8 elements a
message("${VAR}") # a;b;c;d;e;f;2.718;Hello There

# append 2 elements in the list 1.6 and XX
list(APPEND VAR 1.6 XX)
message("${VAR}") # a;b;c;d;e;f;2.718;Hello There;1.6;XX

# remove 2 elements from VAR at index 2 and -3 (Note that indexing starts from zero and negative index means the start from the last element. list indexing from end starts from -1)
list(REMOVE_AT VAR 2 -3)
message("${VAR}") # a;b;d;e;f;2.718;1.6;XX

# remove 2 elements from VAR
list(REMOVE_ITEM VAR a 2.718)
message("${VAR}") # b;d;e;f;1.6;XX

# insert elements XX and 2.7 at index 2
list(INSERT VAR 2 XX 2.7)
message("${VAR}") # b;d;XX;2.7;e;f;1.6;XX

# reverse the list
list(REVERSE VAR)
message("${VAR}") # XX;1.6;f;e;2.7;XX;d;b

# remove the duplicates
list(REMOVE_DUPLICATES VAR)
message("${VAR}") # XX;1.6;f;e;2.7;d;b

# sort the list
list(SORT VAR)
message("${VAR}") # 1.6;2.7;XX;b;d;e;f

# get the length of list VAR. This command will store the length in variable len_var
list(LENGTH VAR len_var)
message(${len_var}) # 7

# get elements at 2, 5 and 6th index and store them in a list called sub_list
list(GET VAR 2 5 6 sub_list)
message("${sub_list}") # XX;e;f

# likewise there are string operations whose command starts with string()





