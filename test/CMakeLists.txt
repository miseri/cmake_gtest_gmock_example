# Now simply link against gtest or gtest_main as needed. Eg
add_executable(example example.cpp)

target_include_directories(example
  PUBLIC
  $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/
)

# target_link_libraries(example gtest_main)
target_link_libraries(example gmock_main)
add_test(NAME example_test COMMAND example)

