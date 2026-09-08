cmake_minimum_required(VERSION 3.14)
project(SimpleCalculator VERSION 1.0.0 LANGUAGES CXX)

# Enforce Modern C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Create the executable and link source files
add_executable(SimpleCalculator 
    src/main.cpp
    src/Calculator.cpp
)

# Tell CMake where to look for header (.hpp) files
target_include_directories(SimpleCalculator PRIVATE include)

# Strict warnings to catch mistakes early
if(MSVC)
    target_compile_options(SimpleCalculator PRIVATE /W4 /WX)
else()
    target_compile_options(SimpleCalculator PRIVATE -Wall -Wextra -Wpedantic -Werror)
endif()
