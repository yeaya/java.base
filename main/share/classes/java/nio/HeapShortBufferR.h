#ifndef _java_nio_HeapShortBufferR_h_
#define _java_nio_HeapShortBufferR_h_
//$ class java.nio.HeapShortBufferR
//$ extends java.nio.HeapShortBuffer

#include <java/lang/Array.h>
#include <java/nio/HeapShortBuffer.h>

#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET
#pragma push_macro("ARRAY_INDEX_SCALE")
#undef ARRAY_INDEX_SCALE

namespace java {
	namespace nio {
		class ByteOrder;
		class ShortBuffer;
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

class HeapShortBufferR : public ::java::nio::HeapShortBuffer {
	$class(HeapShortBufferR, 0, ::java::nio::HeapShortBuffer)
public:
	HeapShortBufferR();
	using ::java::nio::HeapShortBuffer::get;
	using ::java::nio::HeapShortBuffer::limit;
	void init$(int32_t cap, int32_t lim, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($shorts* buf, int32_t off, int32_t len, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($shorts* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::ShortBuffer* asReadOnlyBuffer() override;
	virtual ::java::nio::ShortBuffer* compact() override;
	virtual ::java::nio::ShortBuffer* duplicate() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::HeapShortBuffer::put;
	using ::java::nio::HeapShortBuffer::position;
	virtual ::java::nio::ShortBuffer* put(int16_t x) override;
	virtual ::java::nio::ShortBuffer* put(int32_t i, int16_t x) override;
	virtual ::java::nio::ShortBuffer* put($shorts* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::ShortBuffer* put(::java::nio::ShortBuffer* src) override;
	virtual ::java::nio::ShortBuffer* put(int32_t index, ::java::nio::ShortBuffer* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::ShortBuffer* put(int32_t index, $shorts* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::ShortBuffer* slice() override;
	virtual ::java::nio::ShortBuffer* slice(int32_t index, int32_t length) override;
	static int64_t ARRAY_BASE_OFFSET;
	static int64_t ARRAY_INDEX_SCALE;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")
#pragma pop_macro("ARRAY_INDEX_SCALE")

#endif // _java_nio_HeapShortBufferR_h_