# cmake_minimum_required(VERSION 3.14)

# project(Money)

# set(CMAKE_CXX_STANDARD 17)

# # find_package(PostgreSQL REQUIRED)

# add_executable(Money main.cpp)

# # target_link_libraries(Money PRIVATE PostgreSQL::PostgreSQL)

cmake_minimum_required(VERSION 3.14)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
    libpqxx
    GIT_REPOSITORY https://github.com/jtv/libpqxx.git
    GIT_TAG master  # или укажите нужный тег или ветку
)

FetchContent_MakeAvailable(libpqxx)

add_executable(Money main.cpp)
target_link_libraries(Money pqxx)
