cmake_minimum_required(VERSION 3.28)
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

project(vcpkg_test)

set(CMAKE_CXX_STANDARD 17)

find_package(fmt CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

add_executable(vcpkg_test main.cpp)

target_link_libraries(vcpkg_test PRIVATE fmt::fmt)
target_link_libraries(vcpkg_test PRIVATE glm::glm)