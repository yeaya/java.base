# libjdk - Java Base Library

![License](https://img.shields.io/badge/license-GPL%20v2%20with%20Classpath%20Exception-green.svg)
![Platforms](https://img.shields.io/badge/platforms-Windows%20|%20Linux%20|%20macOS-lightgrey.svg)

[**libjdk**](https://github.com/libjdk/libjdk) is a comprehensive C++ implementation of the Java Development Kit (JDK), providing native C++ libraries that mirror the functionality of Java's core libraries and modules. While it provides Java-like APIs, it runs as native C++ code without requiring a Java Virtual Machine.

## Overview

This project provides a complete C++ implementation of Java's core functionality, including:

- **Core Java Classes**: Object, String, Integer, Boolean, Character, and all primitive wrapper classes
- **Collections Framework**: Complete collection interfaces and implementations including HashMap, ArrayList, LinkedList, HashSet, TreeMap, etc.
- **I/O Operations**: File handling, streams, and serialization
- **Concurrency**: Thread management and synchronization primitives
- **Exception Handling**: Complete exception hierarchy
- **Reflection**: Class introspection and dynamic method invocation
- **Platform-specific Implementations**: Native code for Windows, Linux, and macOS

## Features

- ✅ **Cross-platform Support**: Windows, Linux, and macOS
- ✅ **CMake Build System**: Modern, portable build configuration
- ✅ **Comprehensive Testing**: Extensive test suite included
- ✅ **OpenJDK Compatible**: Based on OpenJDK 17.35
- ✅ **GPL Licensed**: Free software with Classpath exception

## Project Structure

```
java.base/
├── main/                   # Main source code
│   ├── share/              # Platform-independent code
│   │   ├── classes/        # Java class implementations
│   │   ├── include/        # Header files
│   │   └── native/         # Native implementations
│   ├── windows/            # Windows-specific code
│   ├── linux/              # Linux-specific code
│   └── macos/              # macOS-specific code
├── test/                   # Test suite
├── build/                  # Build artifacts
├── legal/                  # Legal notices and licenses
└── CMakeLists.txt          # Build configuration
```

## Dependencies

This project includes several third-party libraries with appropriate licensing:

- **OpenJDK**: Core Java implementation (GPL v2 with Classpath exception)
- **ICU**: Internationalization support
- **zlib**: Compression library
- **libffi**: Foreign function interface
- **ASM**: Bytecode manipulation
- **AES**: Encryption support
- **Unicode**: Character set support
- **CLDR**: Locale data
- **wepoll**: Windows event polling

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
   cmake --build java.base.build --config Release --target install -j 8
   ```

## Basic Example
```cpp
#include <jcpp.h>

int main() {
    $System::init();
    try {
        $System::out->println("hello, world"_s);
    } catch ($Throwable&) {
        $var($Throwable, e, $catch());
        e->printStackTrace();
    }
    $System::deinit();
    return 0;
}
```

## Contributing

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Add tests for new functionality
5. Ensure all tests pass
6. Submit a pull request

## License

This project is licensed under the GNU General Public License v2 with the Classpath exception, allowing linking with proprietary software. See the [LICENSE](LICENSE) file for details.

## Legal Notices

This project includes code from various open source projects. See the [legal/](legal/) directory for detailed licensing information for each component.