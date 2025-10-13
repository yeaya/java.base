#ifndef _java_nio_HeapFloatBufferR_h_
#define _java_nio_HeapFloatBufferR_h_
//$ class java.nio.HeapFloatBufferR
//$ extends java.nio.HeapFloatBuffer

#include <java/lang/Array.h>
#include <java/nio/HeapFloatBuffer.h>

#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET
#pragma push_macro("ARRAY_INDEX_SCALE")
#undef ARRAY_INDEX_SCALE

namespace java {
	namespace nio {
		class ByteOrder;
		class FloatBuffer;
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

class HeapFloatBufferR : public ::java::nio::HeapFloatBuffer {
	$class(HeapFloatBufferR, 0, ::java::nio::HeapFloatBuffer)
public:
	HeapFloatBufferR();
	using ::java::nio::HeapFloatBuffer::get;
	using ::java::nio::HeapFloatBuffer::limit;
	void init$(int32_t cap, int32_t lim, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($floats* buf, int32_t off, int32_t len, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($floats* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::FloatBuffer* asReadOnlyBuffer() override;
	virtual ::java::nio::FloatBuffer* compact() override;
	virtual ::java::nio::FloatBuffer* duplicate() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::HeapFloatBuffer::put;
	using ::java::nio::HeapFloatBuffer::position;
	virtual ::java::nio::FloatBuffer* put(float x) override;
	virtual ::java::nio::FloatBuffer* put(int32_t i, float x) override;
	virtual ::java::nio::FloatBuffer* put($floats* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::FloatBuffer* put(::java::nio::FloatBuffer* src) override;
	virtual ::java::nio::FloatBuffer* put(int32_t index, ::java::nio::FloatBuffer* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::FloatBuffer* put(int32_t index, $floats* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::FloatBuffer* slice() override;
	virtual ::java::nio::FloatBuffer* slice(int32_t index, int32_t length) override;
	static int64_t ARRAY_BASE_OFFSET;
	static int64_t ARRAY_INDEX_SCALE;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")
#pragma pop_macro("ARRAY_INDEX_SCALE")

#endif // _java_nio_HeapFloatBufferR_h_