cmake_minimum_required(VERSION 3.10)
project(sysline)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${sysline_SOURCE_DIR}/cmake")

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

set(sysline_SOURCES 
    config.h
    getloadavg.c 
    mime.c 
    mime.h
    pathnames.h
    rwhod.h
    sysline.c
    sysline.h
)

add_executable(sysline ${sysline_SOURCES})
target_link_libraries(sysline ${CURSES_LIBRARY})

#install(TARGETS sysline RUNTIME DESTINATION ${BIN_DIR})

