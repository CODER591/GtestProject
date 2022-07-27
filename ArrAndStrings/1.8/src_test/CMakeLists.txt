

set(CMAKE_CXX_STANDARD 17)

#add_compile_options(-fsanitize=address)

#set(CMAKE_EXE_LINKER_FLAGS "-fsanitize=address")

add_compile_options(-g)
set(CMAKE_EXE_LINKER_FLAGS "-g")

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(test_solution.out main_test.cpp)
target_link_libraries(test_solution.out ${GTEST_LIBRARIES} pthread)
