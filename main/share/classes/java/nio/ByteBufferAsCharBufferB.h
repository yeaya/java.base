#ifndef _java_nio_ByteBufferAsCharBufferB_h_
#define _java_nio_ByteBufferAsCharBufferB_h_
//$ class java.nio.ByteBufferAsCharBufferB
//$ extends java.nio.CharBuffer

#include <java/nio/CharBuffer.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
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

class ByteBufferAsCharBufferB : public ::java::nio::CharBuffer {
	$class(ByteBufferAsCharBufferB, 0, ::java::nio::CharBuffer)
public:
	ByteBufferAsCharBufferB();
	using ::java::nio::CharBuffer::get;
	using ::java::nio::CharBuffer::limit;
	void init$(::java::nio::ByteBuffer* bb, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(::java::nio::ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::CharBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual int64_t byteOffset(int64_t i);
	virtual ::java::nio::ByteOrder* charRegionOrder() override;
	virtual ::java::nio::CharBuffer* compact() override;
	virtual ::java::nio::CharBuffer* duplicate() override;
	virtual char16_t get() override;
	virtual char16_t get(int32_t i) override;
	virtual char16_t getUnchecked(int32_t i) override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	int32_t ix(int32_t i);
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::CharBuffer::put;
	using ::java::nio::CharBuffer::position;
	virtual ::java::nio::CharBuffer* put(char16_t x) override;
	virtual ::java::nio::CharBuffer* put(int32_t i, char16_t x) override;
	virtual ::java::nio::CharBuffer* slice() override;
	virtual ::java::nio::CharBuffer* slice(int32_t index, int32_t length) override;
	virtual ::java::lang::CharSequence* subSequence(int32_t start, int32_t end) override;
	using ::java::nio::CharBuffer::toString;
	virtual $String* toString(int32_t start, int32_t end) override;
	static bool $assertionsDisabled;
	::java::nio::ByteBuffer* bb = nullptr;
};

	} // nio
} // java

#endif // _java_nio_ByteBufferAsCharBufferB_h_