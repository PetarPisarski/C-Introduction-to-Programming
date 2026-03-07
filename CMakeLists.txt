cmake_minimum_required(VERSION 3.26)

project(C_Introduction_to_Programming C)

set(CMAKE_C_STANDARD 11)

file(GLOB_RECURSE TASK_FILES
        "Week */Problem *.c"
)

foreach(task ${TASK_FILES})
    get_filename_component(exec_name ${task} NAME_WE)
    string(REPLACE " " "_" exec_name ${exec_name})
    add_executable(${exec_name} ${task})
endforeach()