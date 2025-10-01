#ifndef _java_nio_MappedMemoryUtils_h_
#define _java_nio_MappedMemoryUtils_h_
//$ class java.nio.MappedMemoryUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}

namespace java {
	namespace nio {

class MappedMemoryUtils : public ::java::lang::Object {
	$class(MappedMemoryUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MappedMemoryUtils();
	void init$();
	static int64_t alignDown(int64_t address, int32_t pageSize);
	static void force(::java::io::FileDescriptor* fd, int64_t address, bool isSync, int64_t index, int64_t length);
	static void force0(::java::io::FileDescriptor* fd, int64_t address, int64_t length);
	static bool isLoaded(int64_t address, bool isSync, int64_t size);
	static bool isLoaded0(int64_t address, int64_t length, int64_t pageCount);
	static void load(int64_t address, bool isSync, int64_t size);
	static void load0(int64_t address, int64_t length);
	static int64_t mappingAddress(int64_t address, int64_t mappingOffset);
	static int64_t mappingAddress(int64_t address, int64_t mappingOffset, int64_t index);
	static int64_t mappingLength(int64_t mappingOffset, int64_t length);
	static int64_t mappingOffset(int64_t address);
	static int64_t mappingOffset(int64_t address, int64_t index);
	static void unload(int64_t address, bool isSync, int64_t size);
	static void unload0(int64_t address, int64_t length);
	static int8_t unused;
};

	} // nio
} // java

#endif // _java_nio_MappedMemoryUtils_h_