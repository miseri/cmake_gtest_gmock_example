if not exist build mkdir build
cd build
cmake ..
cmake --build .
cmake --build . --config Release
