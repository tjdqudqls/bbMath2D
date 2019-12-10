set(BINARY ${CMAKE_PROJECT_NAME})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

set(SOURCES ${SOURCES})

add_library(bbMath2D INTERFACE)
target_sources(bbMath2D INTERFACE bbMath2D.h)

#add_executable(${BINARY}_run ${SOURCES})
#
#add_library(${BINARY}_lib STATIC ${SOURCES})