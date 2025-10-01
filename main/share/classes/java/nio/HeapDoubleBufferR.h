#ifndef _java_nio_HeapDoubleBufferR_h_
#define _java_nio_HeapDoubleBufferR_h_
//$ class java.nio.HeapDoubleBufferR
//$ extends java.nio.HeapDoubleBuffer

#include <java/lang/Array.h>
#include <java/nio/HeapDoubleBuffer.h>

#pragma push_macro("ARRAY_INDEX_SCALE")
#undef ARRAY_INDEX_SCALE
#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET

namespace java {
	namespace nio {
		class ByteOrder;
		class DoubleBuffer;
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

class HeapDoubleBufferR : public ::java::nio::HeapDoubleBuffer {
	$class(HeapDoubleBufferR, 0, ::java::nio::HeapDoubleBuffer)
public:
	HeapDoubleBufferR();
	using ::java::nio::HeapDoubleBuffer::get;
	using ::java::nio::HeapDoubleBuffer::limit;
	void init$(int32_t cap, int32_t lim, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($doubles* buf, int32_t off, int32_t len, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($doubles* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::DoubleBuffer* asReadOnlyBuffer() override;
	virtual ::java::nio::DoubleBuffer* compact() override;
	virtual ::java::nio::DoubleBuffer* duplicate() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::HeapDoubleBuffer::put;
	using ::java::nio::HeapDoubleBuffer::position;
	virtual ::java::nio::DoubleBuffer* put(double x) override;
	virtual ::java::nio::DoubleBuffer* put(int32_t i, double x) override;
	virtual ::java::nio::DoubleBuffer* put($doubles* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::DoubleBuffer* put(::java::nio::DoubleBuffer* src) override;
	virtual ::java::nio::DoubleBuffer* put(int32_t index, ::java::nio::DoubleBuffer* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::DoubleBuffer* put(int32_t index, $doubles* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::DoubleBuffer* slice() override;
	virtual ::java::nio::DoubleBuffer* slice(int32_t index, int32_t length) override;
	static int64_t ARRAY_BASE_OFFSET;
	static int64_t ARRAY_INDEX_SCALE;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_INDEX_SCALE")
#pragma pop_macro("ARRAY_BASE_OFFSET")

#endif // _java_nio_HeapDoubleBufferR_h_