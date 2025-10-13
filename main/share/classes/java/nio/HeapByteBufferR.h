#ifndef _java_nio_HeapByteBufferR_h_
#define _java_nio_HeapByteBufferR_h_
//$ class java.nio.HeapByteBufferR
//$ extends java.nio.HeapByteBuffer

#include <java/lang/Array.h>
#include <java/nio/HeapByteBuffer.h>

#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET
#pragma push_macro("ARRAY_INDEX_SCALE")
#undef ARRAY_INDEX_SCALE

namespace java {
	namespace nio {
		class ByteBuffer;
		class CharBuffer;
		class DoubleBuffer;
		class FloatBuffer;
		class IntBuffer;
		class LongBuffer;
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

class HeapByteBufferR : public ::java::nio::HeapByteBuffer {
	$class(HeapByteBufferR, 0, ::java::nio::HeapByteBuffer)
public:
	HeapByteBufferR();
	using ::java::nio::HeapByteBuffer::get;
	using ::java::nio::HeapByteBuffer::limit;
	void init$(int32_t cap, int32_t lim, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($bytes* buf, int32_t off, int32_t len, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($bytes* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual int8_t _get(int32_t i) override;
	virtual void _put(int32_t i, int8_t b) override;
	virtual ::java::nio::CharBuffer* asCharBuffer() override;
	virtual ::java::nio::DoubleBuffer* asDoubleBuffer() override;
	virtual ::java::nio::FloatBuffer* asFloatBuffer() override;
	virtual ::java::nio::IntBuffer* asIntBuffer() override;
	virtual ::java::nio::LongBuffer* asLongBuffer() override;
	virtual ::java::nio::ByteBuffer* asReadOnlyBuffer() override;
	virtual ::java::nio::ShortBuffer* asShortBuffer() override;
	virtual ::java::nio::ByteBuffer* compact() override;
	virtual ::java::nio::ByteBuffer* duplicate() override;
	virtual bool isReadOnly() override;
	using ::java::nio::HeapByteBuffer::put;
	using ::java::nio::HeapByteBuffer::position;
	virtual ::java::nio::ByteBuffer* put(int8_t x) override;
	virtual ::java::nio::ByteBuffer* put(int32_t i, int8_t x) override;
	virtual ::java::nio::ByteBuffer* put($bytes* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::ByteBuffer* put(::java::nio::ByteBuffer* src) override;
	virtual ::java::nio::ByteBuffer* put(int32_t index, ::java::nio::ByteBuffer* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::ByteBuffer* put(int32_t index, $bytes* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::ByteBuffer* putChar(char16_t x) override;
	virtual ::java::nio::ByteBuffer* putChar(int32_t i, char16_t x) override;
	virtual ::java::nio::ByteBuffer* putDouble(double x) override;
	virtual ::java::nio::ByteBuffer* putDouble(int32_t i, double x) override;
	virtual ::java::nio::ByteBuffer* putFloat(float x) override;
	virtual ::java::nio::ByteBuffer* putFloat(int32_t i, float x) override;
	virtual ::java::nio::ByteBuffer* putInt(int32_t x) override;
	virtual ::java::nio::ByteBuffer* putInt(int32_t i, int32_t x) override;
	virtual ::java::nio::ByteBuffer* putLong(int64_t x) override;
	virtual ::java::nio::ByteBuffer* putLong(int32_t i, int64_t x) override;
	virtual ::java::nio::ByteBuffer* putShort(int16_t x) override;
	virtual ::java::nio::ByteBuffer* putShort(int32_t i, int16_t x) override;
	virtual ::java::nio::ByteBuffer* slice() override;
	virtual ::java::nio::ByteBuffer* slice(int32_t index, int32_t length) override;
	static int64_t ARRAY_BASE_OFFSET;
	static int64_t ARRAY_INDEX_SCALE;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")
#pragma pop_macro("ARRAY_INDEX_SCALE")

#endif // _java_nio_HeapByteBufferR_h_