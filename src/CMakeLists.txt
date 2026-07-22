
set(TARGET_NAME "raytracer")

add_executable(${TARGET_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp ${CMAKE_CURRENT_SOURCE_DIR}/vec3.hpp ${CMAKE_CURRENT_SOURCE_DIR}/color.hpp)

target_include_directories(${TARGET_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
