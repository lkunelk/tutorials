cmake_minimum_required(VERSION 3.15)
project(ros_framework)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(ros_framework src/main.cpp src/publisher.cpp src/subscriber.cpp src/message.cpp)