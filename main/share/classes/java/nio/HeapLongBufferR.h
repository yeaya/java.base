#ifndef _java_nio_HeapLongBufferR_h_
#define _java_nio_HeapLongBufferR_h_
//$ class java.nio.HeapLongBufferR
//$ extends java.nio.HeapLongBuffer

#include <java/lang/Array.h>
#include <java/nio/HeapLongBuffer.h>

#pragma push_macro("ARRAY_INDEX_SCALE")
#undef ARRAY_INDEX_SCALE
#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET

namespace java {
	namespace nio {
		class ByteOrder;
		class LongBuffer;
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

class HeapLongBufferR : public ::java::nio::HeapLongBuffer {
	$class(HeapLongBufferR, 0, ::java::nio::HeapLongBuffer)
public:
	HeapLongBufferR();
	using ::java::nio::HeapLongBuffer::get;
	using ::java::nio::HeapLongBuffer::limit;
	void init$(int32_t cap, int32_t lim, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($longs* buf, int32_t off, int32_t len, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($longs* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::LongBuffer* asReadOnlyBuffer() override;
	virtual ::java::nio::LongBuffer* compact() override;
	virtual ::java::nio::LongBuffer* duplicate() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::HeapLongBuffer::put;
	using ::java::nio::HeapLongBuffer::position;
	virtual ::java::nio::LongBuffer* put(int64_t x) override;
	virtual ::java::nio::LongBuffer* put(int32_t i, int64_t x) override;
	virtual ::java::nio::LongBuffer* put($longs* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::LongBuffer* put(::java::nio::LongBuffer* src) override;
	virtual ::java::nio::LongBuffer* put(int32_t index, ::java::nio::LongBuffer* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::LongBuffer* put(int32_t index, $longs* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::LongBuffer* slice() override;
	virtual ::java::nio::LongBuffer* slice(int32_t index, int32_t length) override;
	static int64_t ARRAY_BASE_OFFSET;
	static int64_t ARRAY_INDEX_SCALE;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_INDEX_SCALE")
#pragma pop_macro("ARRAY_BASE_OFFSET")

#endif // _java_nio_HeapLongBufferR_h_