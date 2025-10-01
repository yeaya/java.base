#ifndef _java_nio_Buffer$1_h_
#define _java_nio_Buffer$1_h_
//$ class java.nio.Buffer$1
//$ extends jdk.internal.access.JavaNioAccess

#include <java/lang/Array.h>
#include <jdk/internal/access/JavaNioAccess.h>

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

namespace java {
	namespace nio {

class Buffer$1 : public ::jdk::internal::access::JavaNioAccess {
	$class(Buffer$1, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::access::JavaNioAccess)
public:
	Buffer$1();
	void init$();
	virtual ::jdk::internal::misc::ScopedMemoryAccess$Scope$Handle* acquireScope(::java::nio::Buffer* buffer, bool async) override;
	virtual ::jdk::internal::access::foreign::MemorySegmentProxy* bufferSegment(::java::nio::Buffer* buffer) override;
	virtual void force(::java::io::FileDescriptor* fd, int64_t address, bool isSync, int64_t offset, int64_t size) override;
	virtual int64_t getBufferAddress(::java::nio::ByteBuffer* bb) override;
	virtual $Object* getBufferBase(::java::nio::ByteBuffer* bb) override;
	virtual ::jdk::internal::misc::VM$BufferPool* getDirectBufferPool() override;
	virtual bool isLoaded(int64_t address, bool isSync, int64_t size) override;
	virtual void load(int64_t address, bool isSync, int64_t size) override;
	virtual ::java::nio::ByteBuffer* newDirectByteBuffer(int64_t addr, int32_t cap, Object$* obj, ::jdk::internal::access::foreign::MemorySegmentProxy* segment) override;
	virtual ::java::nio::ByteBuffer* newHeapByteBuffer($bytes* hb, int32_t offset, int32_t capacity, ::jdk::internal::access::foreign::MemorySegmentProxy* segment) override;
	virtual ::java::nio::ByteBuffer* newMappedByteBuffer(::jdk::internal::access::foreign::UnmapperProxy* unmapperProxy, int64_t address, int32_t cap, Object$* obj, ::jdk::internal::access::foreign::MemorySegmentProxy* segment) override;
	virtual int32_t pageSize() override;
	virtual void reserveMemory(int64_t size, int64_t cap) override;
	virtual void unload(int64_t address, bool isSync, int64_t size) override;
	virtual ::jdk::internal::access::foreign::UnmapperProxy* unmapper(::java::nio::ByteBuffer* bb) override;
	virtual void unreserveMemory(int64_t size, int64_t cap) override;
};

	} // nio
} // java

#endif // _java_nio_Buffer$1_h_