#ifndef _java_nio_HeapFloatBuffer_h_
#define _java_nio_HeapFloatBuffer_h_
//$ class java.nio.HeapFloatBuffer
//$ extends java.nio.FloatBuffer

#include <java/lang/Array.h>
#include <java/nio/FloatBuffer.h>

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

class HeapFloatBuffer : public ::java::nio::FloatBuffer {
	$class(HeapFloatBuffer, 0, ::java::nio::FloatBuffer)
public:
	HeapFloatBuffer();
	using ::java::nio::FloatBuffer::get;
	using ::java::nio::FloatBuffer::limit;
	void init$(int32_t cap, int32_t lim, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($floats* buf, int32_t off, int32_t len, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($floats* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::FloatBuffer* asReadOnlyBuffer() override;
	virtual ::java::nio::FloatBuffer* compact() override;
	virtual ::java::nio::FloatBuffer* duplicate() override;
	virtual float get() override;
	virtual float get(int32_t i) override;
	virtual ::java::nio::FloatBuffer* get($floats* dst, int32_t offset, int32_t length) override;
	virtual ::java::nio::FloatBuffer* get(int32_t index, $floats* dst, int32_t offset, int32_t length) override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual int32_t ix(int32_t i);
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::FloatBuffer::put;
	using ::java::nio::FloatBuffer::position;
	virtual ::java::nio::FloatBuffer* put(float x) override;
	virtual ::java::nio::FloatBuffer* put(int32_t i, float x) override;
	virtual ::java::nio::FloatBuffer* put($floats* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::FloatBuffer* put(::java::nio::FloatBuffer* src) override;
	virtual ::java::nio::FloatBuffer* put(int32_t index, ::java::nio::FloatBuffer* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::FloatBuffer* put(int32_t index, $floats* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::FloatBuffer* slice() override;
	virtual ::java::nio::FloatBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	static int64_t ARRAY_INDEX_SCALE;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_INDEX_SCALE")
#pragma pop_macro("ARRAY_BASE_OFFSET")

#endif // _java_nio_HeapFloatBuffer_h_