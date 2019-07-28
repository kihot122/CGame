cmake_minimum_required(VERSION 3.15)
project(Dwarf)

link_directories(${CMAKE_SOURCE_DIR}/lib)

add_executable(Client src/client.cpp src/cell.cpp src/map.cpp src/snake.cpp)
add_executable(Server src/server.cpp)

target_link_libraries(Client mingw32)
target_link_libraries(Client SDL2main)
target_link_libraries(Client SDL2)

target_link_libraries(Server mingw32)
target_link_libraries(Server SDL2main)
target_link_libraries(Server SDL2)

SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)