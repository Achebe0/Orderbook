cmake_minimum_required(VERSION 3.20)
project(orderbook CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost REQUIRED COMPONENTS system)
find_package(OpenSSL REQUIRED)

add_executable(orderbook
    src/core/main.cpp
)

target_include_directories(orderbook PRIVATE include)
target_link_libraries(orderbook PRIVATE Boost::system OpenSSL::SSL OpenSSL::Crypto)
