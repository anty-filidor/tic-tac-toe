# Global configuration of CMake
cmake_minimum_required(VERSION 3.12)
cmake_policy(SET CMP0079 NEW)
set(CMAKE_CXX_STANDARD 14)

# Path which the linker should look into while linking dynamic/shared libraries
set(LD_LIBRARY_PATH $LD_LIBRARY_PATH:/usr/lib/)
set(LDFLAGS "-Wl,--copy-dt-needed-entries")

# Name of the project
project(TicTacToeExe)

# Adds dirs with another parts of the project
add_subdirectory(src)

# These commands create executable
add_executable(${PROJECT_NAME} main.cpp)

# Link necessary libraries to the project
target_link_libraries(${PROJECT_NAME} TicTacToe)

# CTest/GoogleTest configuration
# include(CTest)
# add_subdirectory(submodules/googletest)
# enable_testing()
# add_subdirectory(tests)
