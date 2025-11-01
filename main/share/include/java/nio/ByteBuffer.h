#ifndef _java_nio_ByteBuffer_h_
#define _java_nio_ByteBuffer_h_
//$ class java.nio.ByteBuffer
//$ extends java.nio.Buffer
//$ implements java.lang.Comparable

#include <java/lang/Array.h>
#include <java/lang/Comparable.h>
#include <java/nio/Buffer.h>

#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET

namespace java {
	namespace nio {
		class ByteOrder;
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

class $import ByteBuffer : public ::java::nio::Buffer, public ::java::lang::Comparable {
	$class(ByteBuffer, $PRELOAD, ::java::nio::Buffer, ::java::lang::Comparable)
public:
	ByteBuffer();
	using ::java::nio::Buffer::limit;
	virtual $Object* clone() override;
	virtual ::java::nio::ByteBuffer* duplicate() override {return nullptr;}
	virtual void finalize() override;
	virtual bool isDirect() override {return false;}
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $bytes* hb, int32_t offset, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($bytes* hb, int64_t addr, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	::java::nio::ByteBuffer* alignedSlice(int32_t unitSize);
	int32_t alignmentOffset(int32_t index, int32_t unitSize);
	static ::java::nio::ByteBuffer* allocate(int32_t capacity);
	static ::java::nio::ByteBuffer* allocateDirect(int32_t capacity);
	virtual $Object* array() override;
	virtual int32_t arrayOffset() override;
	virtual ::java::nio::CharBuffer* asCharBuffer() {return nullptr;}
	virtual ::java::nio::DoubleBuffer* asDoubleBuffer() {return nullptr;}
	virtual ::java::nio::FloatBuffer* asFloatBuffer() {return nullptr;}
	virtual ::java::nio::IntBuffer* asIntBuffer() {return nullptr;}
	virtual ::java::nio::LongBuffer* asLongBuffer() {return nullptr;}
	virtual ::java::nio::ByteBuffer* asReadOnlyBuffer() {return nullptr;}
	virtual ::java::nio::ShortBuffer* asShortBuffer() {return nullptr;}
	virtual $Object* base() override;
	virtual ::java::nio::ByteBuffer* clear() override;
	virtual ::java::nio::ByteBuffer* compact() {return nullptr;}
	static int32_t compare(int8_t x, int8_t y);
	virtual int32_t compareTo(::java::nio::ByteBuffer* that);
	virtual int32_t compareTo(Object$* that) override;
	virtual bool equals(Object$* ob) override;
	virtual ::java::nio::ByteBuffer* flip() override;
	virtual int8_t get() {return 0;}
	virtual int8_t get(int32_t index) {return 0;}
	virtual ::java::nio::ByteBuffer* get($bytes* dst, int32_t offset, int32_t length);
	virtual ::java::nio::ByteBuffer* get($bytes* dst);
	virtual ::java::nio::ByteBuffer* get(int32_t index, $bytes* dst, int32_t offset, int32_t length);
	virtual ::java::nio::ByteBuffer* get(int32_t index, $bytes* dst);
	::java::nio::ByteBuffer* getArray(int32_t index, $bytes* dst, int32_t offset, int32_t length);
	virtual char16_t getChar() {return 0;}
	virtual char16_t getChar(int32_t index) {return 0;}
	virtual double getDouble() {return 0.0;}
	virtual double getDouble(int32_t index) {return 0.0;}
	virtual float getFloat() {return 0.0;}
	virtual float getFloat(int32_t index) {return 0.0;}
	virtual int32_t getInt() {return 0;}
	virtual int32_t getInt(int32_t index) {return 0;}
	virtual int64_t getLong() {return 0;}
	virtual int64_t getLong(int32_t index) {return 0;}
	virtual int16_t getShort() {return 0;}
	virtual int16_t getShort(int32_t index) {return 0;}
	virtual bool hasArray() override;
	virtual int32_t hashCode() override;
	virtual ::java::nio::ByteBuffer* limit(int32_t newLimit) override;
	virtual ::java::nio::ByteBuffer* mark() override;
	virtual int32_t mismatch(::java::nio::ByteBuffer* that);
	::java::nio::ByteOrder* order();
	::java::nio::ByteBuffer* order(::java::nio::ByteOrder* bo);
	using ::java::nio::Buffer::position;
	virtual ::java::nio::ByteBuffer* position(int32_t newPosition) override;
	virtual ::java::nio::ByteBuffer* put(int8_t b) {return nullptr;}
	virtual ::java::nio::ByteBuffer* put(int32_t index, int8_t b) {return nullptr;}
	virtual ::java::nio::ByteBuffer* put(::java::nio::ByteBuffer* src);
	virtual ::java::nio::ByteBuffer* put(int32_t index, ::java::nio::ByteBuffer* src, int32_t offset, int32_t length);
	virtual ::java::nio::ByteBuffer* put($bytes* src, int32_t offset, int32_t length);
	::java::nio::ByteBuffer* put($bytes* src);
	virtual ::java::nio::ByteBuffer* put(int32_t index, $bytes* src, int32_t offset, int32_t length);
	virtual ::java::nio::ByteBuffer* put(int32_t index, $bytes* src);
	::java::nio::ByteBuffer* putArray(int32_t index, $bytes* src, int32_t offset, int32_t length);
	virtual void putBuffer(int32_t pos, ::java::nio::ByteBuffer* src, int32_t srcPos, int32_t n);
	virtual ::java::nio::ByteBuffer* putChar(char16_t value) {return nullptr;}
	virtual ::java::nio::ByteBuffer* putChar(int32_t index, char16_t value) {return nullptr;}
	virtual ::java::nio::ByteBuffer* putDouble(double value) {return nullptr;}
	virtual ::java::nio::ByteBuffer* putDouble(int32_t index, double value) {return nullptr;}
	virtual ::java::nio::ByteBuffer* putFloat(float value) {return nullptr;}
	virtual ::java::nio::ByteBuffer* putFloat(int32_t index, float value) {return nullptr;}
	virtual ::java::nio::ByteBuffer* putInt(int32_t value) {return nullptr;}
	virtual ::java::nio::ByteBuffer* putInt(int32_t index, int32_t value) {return nullptr;}
	virtual ::java::nio::ByteBuffer* putLong(int64_t value) {return nullptr;}
	virtual ::java::nio::ByteBuffer* putLong(int32_t index, int64_t value) {return nullptr;}
	virtual ::java::nio::ByteBuffer* putShort(int16_t value) {return nullptr;}
	virtual ::java::nio::ByteBuffer* putShort(int32_t index, int16_t value) {return nullptr;}
	virtual ::java::nio::ByteBuffer* reset() override;
	virtual ::java::nio::ByteBuffer* rewind() override;
	virtual ::java::nio::ByteBuffer* slice() override {return nullptr;}
	virtual ::java::nio::ByteBuffer* slice(int32_t index, int32_t length) override {return nullptr;}
	virtual $String* toString() override;
	static ::java::nio::ByteBuffer* wrap($bytes* array, int32_t offset, int32_t length);
	static ::java::nio::ByteBuffer* wrap($bytes* array);
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	$bytes* hb = nullptr;
	int32_t offset = 0;
	bool isReadOnly$ = false;
	bool bigEndian = false;
	bool nativeByteOrder = false;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")

#endif // _java_nio_ByteBuffer_h_