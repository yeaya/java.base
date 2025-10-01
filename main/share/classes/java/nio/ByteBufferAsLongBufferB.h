#ifndef _java_nio_ByteBufferAsLongBufferB_h_
#define _java_nio_ByteBufferAsLongBufferB_h_
//$ class java.nio.ByteBufferAsLongBufferB
//$ extends java.nio.LongBuffer

#include <java/nio/LongBuffer.h>

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

class ByteBufferAsLongBufferB : public ::java::nio::LongBuffer {
	$class(ByteBufferAsLongBufferB, 0, ::java::nio::LongBuffer)
public:
	ByteBufferAsLongBufferB();
	using ::java::nio::LongBuffer::get;
	using ::java::nio::LongBuffer::limit;
	void init$(::java::nio::ByteBuffer* bb, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(::java::nio::ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::LongBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual int64_t byteOffset(int64_t i);
	virtual ::java::nio::LongBuffer* compact() override;
	virtual ::java::nio::LongBuffer* duplicate() override;
	virtual int64_t get() override;
	virtual int64_t get(int32_t i) override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	int32_t ix(int32_t i);
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::LongBuffer::put;
	using ::java::nio::LongBuffer::position;
	virtual ::java::nio::LongBuffer* put(int64_t x) override;
	virtual ::java::nio::LongBuffer* put(int32_t i, int64_t x) override;
	virtual ::java::nio::LongBuffer* slice() override;
	virtual ::java::nio::LongBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
	::java::nio::ByteBuffer* bb = nullptr;
};

	} // nio
} // java

#endif // _java_nio_ByteBufferAsLongBufferB_h_