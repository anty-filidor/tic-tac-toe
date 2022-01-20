cmake_minimum_required(VERSION 3.12)

# Determine version of library
set(VERSION_MAJOR 0)
set(VERSION_MINOR 0)
set(VERSION_PATCH 1)
set(LIB_VERSION_STRING ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH})

# Name of the project
project(TicTacToe VERSION ${LIB_VERSION_STRING})

# Create a lib "TicTacToe" which includes the source files from 'src'.
add_library(
      ${PROJECT_NAME} SHARED
      TicTacToe.hpp
      TicTacToe.cpp
)

# Append version suffix to the built libTicTacToe.so
set_target_properties(
      ${PROJECT_NAME} PROPERTIES
      VERSION ${LIB_VERSION_STRING}
)

# Make sure the compiler can find include files for our library when other libs
# or executables link to RedgeIntegration
target_include_directories(
      ${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

# # CTest/GoogleTest configuration
# include(CTest)
# add_subdirectory(submodules/googletest)
# enable_testing()
# add_subdirectory(tests)
