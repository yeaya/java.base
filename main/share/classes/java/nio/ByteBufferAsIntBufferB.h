#ifndef _java_nio_ByteBufferAsIntBufferB_h_
#define _java_nio_ByteBufferAsIntBufferB_h_
//$ class java.nio.ByteBufferAsIntBufferB
//$ extends java.nio.IntBuffer

#include <java/nio/IntBuffer.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class ByteOrder;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			namespace foreign {
				class MemorySegmentProxy;
			}
		}
	}
}

namespace java {
	namespace nio {

class ByteBufferAsIntBufferB : public ::java::nio::IntBuffer {
	$class(ByteBufferAsIntBufferB, 0, ::java::nio::IntBuffer)
public:
	ByteBufferAsIntBufferB();
	using ::java::nio::IntBuffer::get;
	using ::java::nio::IntBuffer::limit;
	void init$(::java::nio::ByteBuffer* bb, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(::java::nio::ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::IntBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual int64_t byteOffset(int64_t i);
	virtual ::java::nio::IntBuffer* compact() override;
	virtual ::java::nio::IntBuffer* duplicate() override;
	virtual int32_t get() override;
	virtual int32_t get(int32_t i) override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	int32_t ix(int32_t i);
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::IntBuffer::put;
	using ::java::nio::IntBuffer::position;
	virtual ::java::nio::IntBuffer* put(int32_t x) override;
	virtual ::java::nio::IntBuffer* put(int32_t i, int32_t x) override;
	virtual ::java::nio::IntBuffer* slice() override;
	virtual ::java::nio::IntBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
	::java::nio::ByteBuffer* bb = nullptr;
};

	} // nio
} // java

#endif // _java_nio_ByteBufferAsIntBufferB_h_