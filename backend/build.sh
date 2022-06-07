cmake -B ./build -S . "-DCMAKE_TOOLCHAIN_FILE=vcpkg/scripts/buildsystems/vcpkg.cmake" && \
cd build && make && ./server


