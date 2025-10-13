#ifndef _java_nio_HeapIntBufferR_h_
#define _java_nio_HeapIntBufferR_h_
//$ class java.nio.HeapIntBufferR
//$ extends java.nio.HeapIntBuffer

#include <java/lang/Array.h>
#include <java/nio/HeapIntBuffer.h>

#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET
#pragma push_macro("ARRAY_INDEX_SCALE")
#undef ARRAY_INDEX_SCALE

namespace java {
	namespace nio {
		class ByteOrder;
		class IntBuffer;
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

class HeapIntBufferR : public ::java::nio::HeapIntBuffer {
	$class(HeapIntBufferR, 0, ::java::nio::HeapIntBuffer)
public:
	HeapIntBufferR();
	using ::java::nio::HeapIntBuffer::get;
	using ::java::nio::HeapIntBuffer::limit;
	void init$(int32_t cap, int32_t lim, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($ints* buf, int32_t off, int32_t len, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($ints* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::IntBuffer* asReadOnlyBuffer() override;
	virtual ::java::nio::IntBuffer* compact() override;
	virtual ::java::nio::IntBuffer* duplicate() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::HeapIntBuffer::put;
	using ::java::nio::HeapIntBuffer::position;
	virtual ::java::nio::IntBuffer* put(int32_t x) override;
	virtual ::java::nio::IntBuffer* put(int32_t i, int32_t x) override;
	virtual ::java::nio::IntBuffer* put($ints* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::IntBuffer* put(::java::nio::IntBuffer* src) override;
	virtual ::java::nio::IntBuffer* put(int32_t index, ::java::nio::IntBuffer* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::IntBuffer* put(int32_t index, $ints* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::IntBuffer* slice() override;
	virtual ::java::nio::IntBuffer* slice(int32_t index, int32_t length) override;
	static int64_t ARRAY_BASE_OFFSET;
	static int64_t ARRAY_INDEX_SCALE;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")
#pragma pop_macro("ARRAY_INDEX_SCALE")

#endif // _java_nio_HeapIntBufferR_h_