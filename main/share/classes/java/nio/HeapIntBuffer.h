#ifndef _java_nio_HeapIntBuffer_h_
#define _java_nio_HeapIntBuffer_h_
//$ class java.nio.HeapIntBuffer
//$ extends java.nio.IntBuffer

#include <java/lang/Array.h>
#include <java/nio/IntBuffer.h>

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

class HeapIntBuffer : public ::java::nio::IntBuffer {
	$class(HeapIntBuffer, 0, ::java::nio::IntBuffer)
public:
	HeapIntBuffer();
	using ::java::nio::IntBuffer::get;
	using ::java::nio::IntBuffer::limit;
	void init$(int32_t cap, int32_t lim, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($ints* buf, int32_t off, int32_t len, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($ints* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::IntBuffer* asReadOnlyBuffer() override;
	virtual ::java::nio::IntBuffer* compact() override;
	virtual ::java::nio::IntBuffer* duplicate() override;
	virtual int32_t get() override;
	virtual int32_t get(int32_t i) override;
	virtual ::java::nio::IntBuffer* get($ints* dst, int32_t offset, int32_t length) override;
	virtual ::java::nio::IntBuffer* get(int32_t index, $ints* dst, int32_t offset, int32_t length) override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual int32_t ix(int32_t i);
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::IntBuffer::put;
	using ::java::nio::IntBuffer::position;
	virtual ::java::nio::IntBuffer* put(int32_t x) override;
	virtual ::java::nio::IntBuffer* put(int32_t i, int32_t x) override;
	virtual ::java::nio::IntBuffer* put($ints* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::IntBuffer* put(::java::nio::IntBuffer* src) override;
	virtual ::java::nio::IntBuffer* put(int32_t index, ::java::nio::IntBuffer* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::IntBuffer* put(int32_t index, $ints* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::IntBuffer* slice() override;
	virtual ::java::nio::IntBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	static int64_t ARRAY_INDEX_SCALE;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_INDEX_SCALE")
#pragma pop_macro("ARRAY_BASE_OFFSET")

#endif // _java_nio_HeapIntBuffer_h_