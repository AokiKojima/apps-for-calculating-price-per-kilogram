
cmake_minimum_required(VERSION 3.14)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Money)
# add_executable(Money main.cpp money.cpp)  # Ensure money.cpp is included


FetchContent_Declare(
    libpqxx
    GIT_REPOSITORY https://github.com/jtv/libpqxx.git
    GIT_TAG master  # или укажите нужный тег или ветку
)

FetchContent_MakeAvailable(libpqxx)

add_executable(Money main.cpp Money/money.cpp)
target_link_libraries(Money pqxx)
