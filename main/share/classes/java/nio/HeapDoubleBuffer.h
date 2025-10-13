#ifndef _java_nio_HeapDoubleBuffer_h_
#define _java_nio_HeapDoubleBuffer_h_
//$ class java.nio.HeapDoubleBuffer
//$ extends java.nio.DoubleBuffer

#include <java/lang/Array.h>
#include <java/nio/DoubleBuffer.h>

#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET
#pragma push_macro("ARRAY_INDEX_SCALE")
#undef ARRAY_INDEX_SCALE

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

class HeapDoubleBuffer : public ::java::nio::DoubleBuffer {
	$class(HeapDoubleBuffer, 0, ::java::nio::DoubleBuffer)
public:
	HeapDoubleBuffer();
	using ::java::nio::DoubleBuffer::get;
	using ::java::nio::DoubleBuffer::limit;
	void init$(int32_t cap, int32_t lim, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($doubles* buf, int32_t off, int32_t len, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($doubles* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::DoubleBuffer* asReadOnlyBuffer() override;
	virtual ::java::nio::DoubleBuffer* compact() override;
	virtual ::java::nio::DoubleBuffer* duplicate() override;
	virtual double get() override;
	virtual double get(int32_t i) override;
	virtual ::java::nio::DoubleBuffer* get($doubles* dst, int32_t offset, int32_t length) override;
	virtual ::java::nio::DoubleBuffer* get(int32_t index, $doubles* dst, int32_t offset, int32_t length) override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual int32_t ix(int32_t i);
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::DoubleBuffer::put;
	using ::java::nio::DoubleBuffer::position;
	virtual ::java::nio::DoubleBuffer* put(double x) override;
	virtual ::java::nio::DoubleBuffer* put(int32_t i, double x) override;
	virtual ::java::nio::DoubleBuffer* put($doubles* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::DoubleBuffer* put(::java::nio::DoubleBuffer* src) override;
	virtual ::java::nio::DoubleBuffer* put(int32_t index, ::java::nio::DoubleBuffer* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::DoubleBuffer* put(int32_t index, $doubles* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::DoubleBuffer* slice() override;
	virtual ::java::nio::DoubleBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	static int64_t ARRAY_INDEX_SCALE;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")
#pragma pop_macro("ARRAY_INDEX_SCALE")

#endif // _java_nio_HeapDoubleBuffer_h_