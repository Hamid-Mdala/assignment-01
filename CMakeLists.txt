cmake_minimum_required(VERSION 3.20)
project(assignment_01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB assignment_sources CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/*.cpp")

foreach(src IN LISTS assignment_sources)
    get_filename_component(base_name "${src}" NAME_WE)
    # normalize: lowercase, replace non-alphanum with underscore, collapse underscores, trim leading/trailing
    string(TOLOWER "${base_name}" base_lower)
    string(REGEX REPLACE "[^a-z0-9]" "_" normalized "${base_lower}")
    string(REGEX REPLACE "_+" "_" normalized "${normalized}")
    string(REGEX REPLACE "^_|_$" "" normalized "${normalized}")

    add_executable("${normalized}" "${src}")
    set_target_properties("${normalized}" PROPERTIES OUTPUT_NAME "${normalized}" RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
endforeach()
