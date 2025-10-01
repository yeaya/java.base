#ifndef _java_nio_DirectByteBufferR_h_
#define _java_nio_DirectByteBufferR_h_
//$ class java.nio.DirectByteBufferR
//$ extends java.nio.DirectByteBuffer

#include <java/nio/DirectByteBuffer.h>

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
		class MappedByteBuffer;
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
namespace sun {
	namespace nio {
		namespace ch {
			class DirectBuffer;
		}
	}
}

namespace java {
	namespace nio {

class DirectByteBufferR : public ::java::nio::DirectByteBuffer {
	$class(DirectByteBufferR, 0, ::java::nio::DirectByteBuffer)
public:
	DirectByteBufferR();
	using ::java::nio::DirectByteBuffer::get;
	using ::java::nio::DirectByteBuffer::limit;
	void init$(int32_t cap);
	void init$(int32_t cap, int64_t addr, ::java::io::FileDescriptor* fd, ::java::lang::Runnable* unmapper, bool isSync, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::java::io::FileDescriptor* fd, bool isSync, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::CharBuffer* asCharBuffer() override;
	virtual ::java::nio::DoubleBuffer* asDoubleBuffer() override;
	virtual ::java::nio::FloatBuffer* asFloatBuffer() override;
	virtual ::java::nio::IntBuffer* asIntBuffer() override;
	virtual ::java::nio::LongBuffer* asLongBuffer() override;
	virtual ::java::nio::ByteBuffer* asReadOnlyBuffer() override;
	virtual ::java::nio::ShortBuffer* asShortBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::MappedByteBuffer* compact() override;
	virtual ::java::nio::MappedByteBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	using ::java::nio::DirectByteBuffer::position;
	using ::java::nio::DirectByteBuffer::put;
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
	static bool $assertionsDisabled;
};

	} // nio
} // java

#endif // _java_nio_DirectByteBufferR_h_