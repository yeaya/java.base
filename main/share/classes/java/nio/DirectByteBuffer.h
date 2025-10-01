#ifndef _java_nio_DirectByteBuffer_h_
#define _java_nio_DirectByteBuffer_h_
//$ class java.nio.DirectByteBuffer
//$ extends java.nio.MappedByteBuffer
//$ implements sun.nio.ch.DirectBuffer

#include <java/nio/MappedByteBuffer.h>
#include <sun/nio/ch/DirectBuffer.h>

#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET
#pragma push_macro("UNALIGNED")
#undef UNALIGNED

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
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
namespace jdk {
	namespace internal {
		namespace ref {
			class Cleaner;
		}
	}
}

namespace java {
	namespace nio {

class DirectByteBuffer : public ::java::nio::MappedByteBuffer, public ::sun::nio::ch::DirectBuffer {
	$class(DirectByteBuffer, 0, ::java::nio::MappedByteBuffer, ::sun::nio::ch::DirectBuffer)
public:
	DirectByteBuffer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::nio::MappedByteBuffer::limit;
	using ::java::nio::MappedByteBuffer::get;
	virtual $Object* clone() override;
	virtual bool equals(Object$* ob) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t cap);
	void init$(int64_t addr, int32_t cap, Object$* ob, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(int64_t addr, int32_t cap, Object$* ob, ::java::io::FileDescriptor* fd, bool isSync, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(int64_t addr, int32_t cap);
	void init$(int32_t cap, int64_t addr, ::java::io::FileDescriptor* fd, ::java::lang::Runnable* unmapper, bool isSync, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::java::io::FileDescriptor* fd, bool isSync, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual int64_t address() override;
	virtual ::java::nio::CharBuffer* asCharBuffer() override;
	virtual ::java::nio::DoubleBuffer* asDoubleBuffer() override;
	virtual ::java::nio::FloatBuffer* asFloatBuffer() override;
	virtual ::java::nio::IntBuffer* asIntBuffer() override;
	virtual ::java::nio::LongBuffer* asLongBuffer() override;
	virtual ::java::nio::ByteBuffer* asReadOnlyBuffer() override;
	virtual ::java::nio::ShortBuffer* asShortBuffer() override;
	virtual $Object* attachment() override;
	virtual $Object* base() override;
	virtual ::jdk::internal::ref::Cleaner* cleaner() override;
	virtual ::java::nio::MappedByteBuffer* compact() override;
	virtual ::java::nio::MappedByteBuffer* duplicate() override;
	virtual int8_t get() override;
	virtual int8_t get(int32_t i) override;
	char16_t getChar(int64_t a);
	virtual char16_t getChar() override;
	virtual char16_t getChar(int32_t i) override;
	double getDouble(int64_t a);
	virtual double getDouble() override;
	virtual double getDouble(int32_t i) override;
	float getFloat(int64_t a);
	virtual float getFloat() override;
	virtual float getFloat(int32_t i) override;
	int32_t getInt(int64_t a);
	virtual int32_t getInt() override;
	virtual int32_t getInt(int32_t i) override;
	int64_t getLong(int64_t a);
	virtual int64_t getLong() override;
	virtual int64_t getLong(int32_t i) override;
	int16_t getShort(int64_t a);
	virtual int16_t getShort() override;
	virtual int16_t getShort(int32_t i) override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	int64_t ix(int32_t i);
	using ::java::nio::MappedByteBuffer::position;
	using ::java::nio::MappedByteBuffer::put;
	virtual ::java::nio::ByteBuffer* put(int8_t x) override;
	virtual ::java::nio::ByteBuffer* put(int32_t i, int8_t x) override;
	::java::nio::ByteBuffer* putChar(int64_t a, char16_t x);
	virtual ::java::nio::ByteBuffer* putChar(char16_t x) override;
	virtual ::java::nio::ByteBuffer* putChar(int32_t i, char16_t x) override;
	::java::nio::ByteBuffer* putDouble(int64_t a, double x);
	virtual ::java::nio::ByteBuffer* putDouble(double x) override;
	virtual ::java::nio::ByteBuffer* putDouble(int32_t i, double x) override;
	::java::nio::ByteBuffer* putFloat(int64_t a, float x);
	virtual ::java::nio::ByteBuffer* putFloat(float x) override;
	virtual ::java::nio::ByteBuffer* putFloat(int32_t i, float x) override;
	::java::nio::ByteBuffer* putInt(int64_t a, int32_t x);
	virtual ::java::nio::ByteBuffer* putInt(int32_t x) override;
	virtual ::java::nio::ByteBuffer* putInt(int32_t i, int32_t x) override;
	::java::nio::ByteBuffer* putLong(int64_t a, int64_t x);
	virtual ::java::nio::ByteBuffer* putLong(int64_t x) override;
	virtual ::java::nio::ByteBuffer* putLong(int32_t i, int64_t x) override;
	::java::nio::ByteBuffer* putShort(int64_t a, int16_t x);
	virtual ::java::nio::ByteBuffer* putShort(int16_t x) override;
	virtual ::java::nio::ByteBuffer* putShort(int32_t i, int16_t x) override;
	virtual ::java::nio::MappedByteBuffer* slice() override;
	virtual ::java::nio::MappedByteBuffer* slice(int32_t index, int32_t length) override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	static bool UNALIGNED;
	$Object* att = nullptr;
	::jdk::internal::ref::Cleaner* cleaner$ = nullptr;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")
#pragma pop_macro("UNALIGNED")

#endif // _java_nio_DirectByteBuffer_h_