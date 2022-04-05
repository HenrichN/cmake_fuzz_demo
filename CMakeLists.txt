cmake_minimum_required(VERSION 3.0.0)
project(cmake_demo VERSION 0.1.0)

add_executable(cmake_demo main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  faulty_library_test
  faulty_library_test.cpp
)
target_link_libraries(
  faulty_library_test
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(faulty_library_test)
