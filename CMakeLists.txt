cmake_minimum_required(VERSION 3.12)
project(my_github_actions)

find_package(ament_cmake REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(${PROJECT_NAME}_main src/main.cpp)
ament_add_dependencies(${PROJECT_NAME}_main std_msgs)
