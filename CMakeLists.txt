cmake_minimum_required(VERSION 3.28)
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

project(kova_job)

set(CMAKE_CXX_STANDARD 17)

find_package(fmt CONFIG REQUIRED)

add_executable("${PROJECT_NAME}" src/main.cpp
        src/fiber/fiber.cpp
        src/fiber/fiber.h
        src/tiny_fiber/tiny_fiber.h)

target_link_libraries("${PROJECT_NAME}" PRIVATE fmt::fmt)
