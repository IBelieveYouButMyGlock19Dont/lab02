set(SOURCES
        main.cpp
        array_utils.cpp
)

add_executable(task04 ${SOURCES})

target_include_directories(task04 PRIVATE .)