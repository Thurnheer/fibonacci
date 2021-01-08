cmake_minimum_required(VERSION 3.13.1)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(test_fibonacci)

#target_link_libraries(app PRIVATE fibonacci::fibonacci)

target_include_directories(app
    PRIVATE
       ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

target_sources(app
PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/src/main.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../src/fib.c
)
