cmake_minimum_required(VERSION 3.10)
project(elfreader)

set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

target_include_directories(elfreader PRIVATE 
    src/parser          
    src/utils    
)

add_executable(elfreader
    src/main.cpp
    src/elf_parser.cpp
    src/utils/file_reader.cpp
)

target_include_directories(elfreader PRIVATE src)