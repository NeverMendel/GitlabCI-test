add_library(color "")

target_sources(
    color
    PRIVATE
        color.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/color.h
    )

target_include_directories(
    color
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )
