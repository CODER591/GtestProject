

set(CMAKE_CXX_STANDARD 17)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(test_solution.out main_test.cpp)
target_link_libraries(test_solution.out ${GTEST_LIBRARIES} pthread)
