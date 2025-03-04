cmake_minimum_required(VERSION 3.10)

project(Money)

set(CMAKE_CXX_STANDARD 17)

# find_package(PostgreSQL REQUIRED)

add_executable(Money main.cpp)

# target_link_libraries(Money PRIVATE PostgreSQL::PostgreSQL)
