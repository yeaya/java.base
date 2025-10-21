# libjdk - Java Base Library Example

![License](https://img.shields.io/badge/license-GPL%20v2%20with%20Classpath%20Exception-green.svg)
![Platforms](https://img.shields.io/badge/platforms-Windows%20|%20Linux%20|%20macOS-lightgrey.svg)

[**libjdk**](https://github.com/libjdk/libjdk) is a comprehensive C++ implementation of the Java Development Kit (JDK), providing native C++ libraries that mirror the functionality of Java's core libraries and modules. While it provides Java-like APIs, it runs as native C++ code without requiring a Java Virtual Machine.

## Requirements

- **CMake**: Version 3.30 or higher
- **C++ Compiler**: Supporting C++17 or later
- **Platform Support**:
  - Windows (x86_64)
  - Linux (x86_64)
  - macOS (x86_64, aarch64)

## Building

To build the example/helloworld project, follow these steps:

1. Clone java.base repository:
   ```sh
   git clone https://github.com/libjdk/java.base.git
   ```

2. Create a build directory:
   ```sh
   mkdir java.base.build
   ```

3. Run CMake to configure the java.base:
   ```sh
   cmake -S java.base -B java.base.build  -DCMAKE_BUILD_TYPE=Release -DINSTALL_TO_REPO=ON
   ```

4. Build the java.base and install it to the repository:
   ```sh
   cmake --build java.base.build --config Release --target install
   ```

5. Create a build directory for the helloworld example:
   ```sh
   mkdir helloworld.build
   ```
6. Build the helloworld example:
   ```sh
   cmake -S example/helloworld -B helloworld.build -DCMAKE_BUILD_TYPE=Release

7. Build the helloworld example:
   ```sh
   cmake --build helloworld.build --config Release
   ```