cmake_minimum_required(VERSION 3.20)
project(orderbook CXX)
list(REMOVE_ITEM CMAKE_SYSTEM_PREFIX_PATH "/mnt/c")
set(BOOST_ROOT "/usr")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost REQUIRED COMPONENTS system)
find_package(OpenSSL REQUIRED)

add_executable(orderbook
    src/core/main.cpp
        src/core/main.cpp
        src/agent/agents.cpp
        src/agent/agents.h
        src/agent/agents.h
        src/agent/agents.h
        src/agent/agents.cpp
)

target_include_directories(orderbook PRIVATE include)
target_link_libraries(orderbook PRIVATE Boost::system OpenSSL::SSL OpenSSL::Crypto)
