cmake_minimum_required(VERSION 3.10)

project(
    ThreeBody
    LANGUAGES CXX
    VERSION 0.0.1
    DESCRIPTION "Three Body Problem Simulation"
)

add_executable(
        ThreeBody
        Source/vector.cpp
        main.cpp
        Source/object.cpp
        Source/eulerObject.cpp
)

add_subdirectory(external)
enable_testing()

add_executable(
        ThreeBodyTests
        Source/vector.cpp
        Source/object.cpp
        Source/eulerObject.cpp
        tests/test_vector.cpp
        tests/test_object.cpp
)

target_link_libraries(
    ThreeBodyTests
    PRIVATE gtest_main
)

include(GoogleTest)
gtest_discover_tests(ThreeBodyTests)
