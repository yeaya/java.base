#ifndef _java_nio_HeapByteBuffer_h_
#define _java_nio_HeapByteBuffer_h_
//$ class java.nio.HeapByteBuffer
//$ extends java.nio.ByteBuffer

#include <java/lang/Array.h>
#include <java/nio/ByteBuffer.h>

#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET
#pragma push_macro("ARRAY_INDEX_SCALE")
#undef ARRAY_INDEX_SCALE

namespace java {
	namespace nio {
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

class HeapByteBuffer : public ::java::nio::ByteBuffer {
	$class(HeapByteBuffer, $PRELOAD, ::java::nio::ByteBuffer)
public:
	HeapByteBuffer();
	using ::java::nio::ByteBuffer::get;
	using ::java::nio::ByteBuffer::limit;
	void init$(int32_t cap, int32_t lim, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($bytes* buf, int32_t off, int32_t len, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($bytes* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual int8_t _get(int32_t i);
	virtual void _put(int32_t i, int8_t b);
	virtual ::java::nio::CharBuffer* asCharBuffer() override;
	virtual ::java::nio::DoubleBuffer* asDoubleBuffer() override;
	virtual ::java::nio::FloatBuffer* asFloatBuffer() override;
	virtual ::java::nio::IntBuffer* asIntBuffer() override;
	virtual ::java::nio::LongBuffer* asLongBuffer() override;
	virtual ::java::nio::ByteBuffer* asReadOnlyBuffer() override;
	virtual ::java::nio::ShortBuffer* asShortBuffer() override;
	int64_t byteOffset(int64_t i);
	virtual ::java::nio::ByteBuffer* compact() override;
	virtual ::java::nio::ByteBuffer* duplicate() override;
	virtual int8_t get() override;
	virtual int8_t get(int32_t i) override;
	virtual ::java::nio::ByteBuffer* get($bytes* dst, int32_t offset, int32_t length) override;
	virtual ::java::nio::ByteBuffer* get(int32_t index, $bytes* dst, int32_t offset, int32_t length) override;
	virtual char16_t getChar() override;
	virtual char16_t getChar(int32_t i) override;
	virtual double getDouble() override;
	virtual double getDouble(int32_t i) override;
	virtual float getFloat() override;
	virtual float getFloat(int32_t i) override;
	virtual int32_t getInt() override;
	virtual int32_t getInt(int32_t i) override;
	virtual int64_t getLong() override;
	virtual int64_t getLong(int32_t i) override;
	virtual int16_t getShort() override;
	virtual int16_t getShort(int32_t i) override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual int32_t ix(int32_t i);
	using ::java::nio::ByteBuffer::put;
	using ::java::nio::ByteBuffer::position;
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
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	static int64_t ARRAY_INDEX_SCALE;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")
#pragma pop_macro("ARRAY_INDEX_SCALE")

#endif // _java_nio_HeapByteBuffer_h_