#include <META-INF/services/java.nio.file.spi.FileSystemProvider.resource.h>

namespace META$INF {
    namespace services {

const char java$nio$file$spi$FileSystemProvider$resource$data[] =
"jdk.internal.jrtfs.JrtFileSystemProvider\n";

int8_t* java$nio$file$spi$FileSystemProvider$resource::get(int32_t& length) {
    length = sizeof(java$nio$file$spi$FileSystemProvider$resource$data) - 1;
    return (int8_t*)java$nio$file$spi$FileSystemProvider$resource$data;
}

    } // services
} // META$INF
