#ifndef _java_nio_StringCharBuffer_h_
#define _java_nio_StringCharBuffer_h_
//$ class java.nio.StringCharBuffer
//$ extends java.nio.CharBuffer

#include <java/nio/CharBuffer.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace nio {
		class ByteOrder;
	}
}

namespace java {
	namespace nio {

class StringCharBuffer : public ::java::nio::CharBuffer {
	$class(StringCharBuffer, $NO_CLASS_INIT, ::java::nio::CharBuffer)
public:
	StringCharBuffer();
	using ::java::nio::CharBuffer::get;
	void init$(::java::lang::CharSequence* s, int32_t start, int32_t end);
	void init$(::java::lang::CharSequence* s, int32_t mark, int32_t pos, int32_t limit, int32_t cap, int32_t offset);
	virtual ::java::nio::CharBuffer* asReadOnlyBuffer() override;
	virtual ::java::nio::ByteOrder* charRegionOrder() override;
	virtual ::java::nio::CharBuffer* compact() override;
	virtual int32_t compareTo(::java::nio::CharBuffer* that) override;
	virtual int32_t compareTo(Object$* that) override;
	virtual ::java::nio::CharBuffer* duplicate() override;
	virtual bool equals(Object$* ob) override;
	virtual char16_t get() override;
	virtual char16_t get(int32_t index) override;
	virtual char16_t getUnchecked(int32_t index) override;
	virtual bool isAddressable() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	using ::java::nio::CharBuffer::limit;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::CharBuffer::put;
	using ::java::nio::CharBuffer::position;
	virtual ::java::nio::CharBuffer* put(char16_t c) override;
	virtual ::java::nio::CharBuffer* put(int32_t index, char16_t c) override;
	virtual ::java::nio::CharBuffer* slice() override;
	virtual ::java::nio::CharBuffer* slice(int32_t index, int32_t length) override;
	virtual ::java::lang::CharSequence* subSequence(int32_t start, int32_t end) override;
	using ::java::nio::CharBuffer::toString;
	virtual $String* toString(int32_t start, int32_t end) override;
	::java::lang::CharSequence* str = nullptr;
};

	} // nio
} // java

#endif // _java_nio_StringCharBuffer_h_