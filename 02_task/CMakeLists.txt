set(SOURCES
        main.cpp
        const_utils.cpp
)

add_executable(task02 ${SOURCES})

target_include_directories(task02 PRIVATE .)