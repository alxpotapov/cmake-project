cmake_minimum_required(VERSION 2.8)
project(Rbt)
add_subdirectory(tests)
enable_testing()

add_test(NAME RbtTest COMMAND RbtTest)
