set(TARGET tests)
project(${TARGET})

add_executable(${TARGET} ${CMAKE_CURRENT_LIST_DIR}/test2dvectors.cpp)
get_target_property(INC_DS datastructure INTERFACE_INCLUDE_DIRECTORIES )
target_include_directories(${TARGET} PRIVATE ${INC_DS})

get_target_property(INC_DS datastructure INCLUDE_DIRECTORIES )
target_include_directories(${TARGET} PRIVATE ${INC_DS})

target_link_libraries(${TARGET} datastructure)