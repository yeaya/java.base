#ifndef _java_nio_MappedByteBuffer_h_
#define _java_nio_MappedByteBuffer_h_
//$ class java.nio.MappedByteBuffer
//$ extends java.nio.ByteBuffer

#include <java/nio/ByteBuffer.h>

#pragma push_macro("SCOPED_MEMORY_ACCESS")
#undef SCOPED_MEMORY_ACCESS

namespace java {
	namespace io {
		class FileDescriptor;
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
			class ScopedMemoryAccess;
		}
	}
}

namespace java {
	namespace nio {

class $import MappedByteBuffer : public ::java::nio::ByteBuffer {
	$class(MappedByteBuffer, 0, ::java::nio::ByteBuffer)
public:
	MappedByteBuffer();
	using ::java::nio::ByteBuffer::limit;
	virtual ::java::nio::MappedByteBuffer* compact() override {return nullptr;}
	virtual ::java::nio::MappedByteBuffer* duplicate() override {return nullptr;}
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::java::io::FileDescriptor* fd, bool isSync, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, bool isSync, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::MappedByteBuffer* clear() override;
	::java::io::FileDescriptor* fileDescriptor();
	virtual ::java::nio::MappedByteBuffer* flip() override;
	::java::nio::MappedByteBuffer* force();
	::java::nio::MappedByteBuffer* force(int32_t index, int32_t length);
	bool isLoaded();
	bool isSync();
	virtual ::java::nio::MappedByteBuffer* limit(int32_t newLimit) override;
	::java::nio::MappedByteBuffer* load();
	virtual ::java::nio::MappedByteBuffer* mark() override;
	using ::java::nio::ByteBuffer::position;
	virtual ::java::nio::MappedByteBuffer* position(int32_t newPosition) override;
	virtual ::java::nio::MappedByteBuffer* reset() override;
	virtual ::java::nio::MappedByteBuffer* rewind() override;
	virtual ::java::nio::MappedByteBuffer* slice() override {return nullptr;}
	virtual ::java::nio::MappedByteBuffer* slice(int32_t index, int32_t length) override {return nullptr;}
	virtual ::jdk::internal::access::foreign::UnmapperProxy* unmapper();
	::java::io::FileDescriptor* fd = nullptr;
	bool isSync$ = false;
	static ::jdk::internal::misc::ScopedMemoryAccess* SCOPED_MEMORY_ACCESS;
};

	} // nio
} // java

#pragma pop_macro("SCOPED_MEMORY_ACCESS")

#endif // _java_nio_MappedByteBuffer_h_