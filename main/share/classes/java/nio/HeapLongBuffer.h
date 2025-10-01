#ifndef _java_nio_HeapLongBuffer_h_
#define _java_nio_HeapLongBuffer_h_
//$ class java.nio.HeapLongBuffer
//$ extends java.nio.LongBuffer

#include <java/lang/Array.h>
#include <java/nio/LongBuffer.h>

#pragma push_macro("ARRAY_INDEX_SCALE")
#undef ARRAY_INDEX_SCALE
#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET

namespace java {
	namespace nio {
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

class HeapLongBuffer : public ::java::nio::LongBuffer {
	$class(HeapLongBuffer, 0, ::java::nio::LongBuffer)
public:
	HeapLongBuffer();
	using ::java::nio::LongBuffer::get;
	using ::java::nio::LongBuffer::limit;
	void init$(int32_t cap, int32_t lim, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($longs* buf, int32_t off, int32_t len, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($longs* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::LongBuffer* asReadOnlyBuffer() override;
	virtual ::java::nio::LongBuffer* compact() override;
	virtual ::java::nio::LongBuffer* duplicate() override;
	virtual int64_t get() override;
	virtual int64_t get(int32_t i) override;
	virtual ::java::nio::LongBuffer* get($longs* dst, int32_t offset, int32_t length) override;
	virtual ::java::nio::LongBuffer* get(int32_t index, $longs* dst, int32_t offset, int32_t length) override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual int32_t ix(int32_t i);
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::LongBuffer::put;
	using ::java::nio::LongBuffer::position;
	virtual ::java::nio::LongBuffer* put(int64_t x) override;
	virtual ::java::nio::LongBuffer* put(int32_t i, int64_t x) override;
	virtual ::java::nio::LongBuffer* put($longs* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::LongBuffer* put(::java::nio::LongBuffer* src) override;
	virtual ::java::nio::LongBuffer* put(int32_t index, ::java::nio::LongBuffer* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::LongBuffer* put(int32_t index, $longs* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::LongBuffer* slice() override;
	virtual ::java::nio::LongBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	static int64_t ARRAY_INDEX_SCALE;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_INDEX_SCALE")
#pragma pop_macro("ARRAY_BASE_OFFSET")

#endif // _java_nio_HeapLongBuffer_h_