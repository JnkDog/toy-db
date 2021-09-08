# cmake_minimum_required(VERSION 2.6)
project(toy_db)

set(CMAKE_C_FLAGS "-std=c99")

add_definitions(-w)

if (CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -ansi -pedantic -Wall")
endif()

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.c")

# set(SOURCES
#     src/storage/*.c
#     src/user_input/*.c
#     src/main.c
# )

add_executable(toy_db ${SOURCES})

target_include_directories(toy_db
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include/storage
        ${PROJECT_SOURCE_DIR}/include/user_input
)