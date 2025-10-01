#ifndef _jdk_internal_access_JavaNioAccess_h_
#define _jdk_internal_access_JavaNioAccess_h_
//$ interface jdk.internal.access.JavaNioAccess
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace nio {
		class Buffer;
		class ByteBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			namespace foreign {
				class MemorySegmentProxy;
				class UnmapperProxy;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class ScopedMemoryAccess$Scope$Handle;
			class VM$BufferPool;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaNioAccess : public ::java::lang::Object {
	$interface(JavaNioAccess, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::jdk::internal::misc::ScopedMemoryAccess$Scope$Handle* acquireScope(::java::nio::Buffer* buffer, bool async) {return nullptr;}
	virtual ::jdk::internal::access::foreign::MemorySegmentProxy* bufferSegment(::java::nio::Buffer* buffer) {return nullptr;}
	virtual void force(::java::io::FileDescriptor* fd, int64_t address, bool isSync, int64_t offset, int64_t size) {}
	virtual int64_t getBufferAddress(::java::nio::ByteBuffer* bb) {return 0;}
	virtual $Object* getBufferBase(::java::nio::ByteBuffer* bb) {return nullptr;}
	virtual ::jdk::internal::misc::VM$BufferPool* getDirectBufferPool() {return nullptr;}
	virtual bool isLoaded(int64_t address, bool isSync, int64_t size) {return false;}
	virtual void load(int64_t address, bool isSync, int64_t size) {}
	virtual ::java::nio::ByteBuffer* newDirectByteBuffer(int64_t addr, int32_t cap, Object$* obj, ::jdk::internal::access::foreign::MemorySegmentProxy* segment) {return nullptr;}
	virtual ::java::nio::ByteBuffer* newHeapByteBuffer($bytes* hb, int32_t offset, int32_t capacity, ::jdk::internal::access::foreign::MemorySegmentProxy* segment) {return nullptr;}
	virtual ::java::nio::ByteBuffer* newMappedByteBuffer(::jdk::internal::access::foreign::UnmapperProxy* unmapperProxy, int64_t addr, int32_t cap, Object$* obj, ::jdk::internal::access::foreign::MemorySegmentProxy* segment) {return nullptr;}
	virtual int32_t pageSize() {return 0;}
	virtual void reserveMemory(int64_t size, int64_t cap) {}
	virtual void unload(int64_t address, bool isSync, int64_t size) {}
	virtual ::jdk::internal::access::foreign::UnmapperProxy* unmapper(::java::nio::ByteBuffer* bb) {return nullptr;}
	virtual void unreserveMemory(int64_t size, int64_t cap) {}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaNioAccess_h_