cmake_minimum_required(VERSION 3.0.0)
project(pokemon VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

include(CTest)
enable_testing()

add_executable(pokemon

interface/interface.cpp

mainmenu/mainmenu.cpp

team/menuteam.cpp
team/team.cpp

team/attacks/attacks.cpp

team/attacks/attacklist.cpp

tools/tools.cpp

main.cpp
)

target_link_libraries(pokemon stdc++fs)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
