#ifndef _java_nio_HeapCharBuffer_h_
#define _java_nio_HeapCharBuffer_h_
//$ class java.nio.HeapCharBuffer
//$ extends java.nio.CharBuffer

#include <java/lang/Array.h>
#include <java/nio/CharBuffer.h>

#pragma push_macro("ARRAY_INDEX_SCALE")
#undef ARRAY_INDEX_SCALE
#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET

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

class HeapCharBuffer : public ::java::nio::CharBuffer {
	$class(HeapCharBuffer, 0, ::java::nio::CharBuffer)
public:
	HeapCharBuffer();
	using ::java::nio::CharBuffer::get;
	using ::java::nio::CharBuffer::limit;
	void init$(int32_t cap, int32_t lim, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($chars* buf, int32_t off, int32_t len, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($chars* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::CharBuffer* asReadOnlyBuffer() override;
	virtual ::java::nio::ByteOrder* charRegionOrder() override;
	virtual ::java::nio::CharBuffer* compact() override;
	virtual ::java::nio::CharBuffer* duplicate() override;
	virtual char16_t get() override;
	virtual char16_t get(int32_t i) override;
	virtual ::java::nio::CharBuffer* get($chars* dst, int32_t offset, int32_t length) override;
	virtual ::java::nio::CharBuffer* get(int32_t index, $chars* dst, int32_t offset, int32_t length) override;
	virtual char16_t getUnchecked(int32_t i) override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual int32_t ix(int32_t i);
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::CharBuffer::put;
	using ::java::nio::CharBuffer::position;
	virtual ::java::nio::CharBuffer* put(char16_t x) override;
	virtual ::java::nio::CharBuffer* put(int32_t i, char16_t x) override;
	virtual ::java::nio::CharBuffer* put($chars* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::CharBuffer* put(::java::nio::CharBuffer* src) override;
	virtual ::java::nio::CharBuffer* put(int32_t index, ::java::nio::CharBuffer* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::CharBuffer* put(int32_t index, $chars* src, int32_t offset, int32_t length) override;
	virtual ::java::nio::CharBuffer* put($String* src, int32_t start, int32_t end) override;
	virtual ::java::nio::CharBuffer* slice() override;
	virtual ::java::nio::CharBuffer* slice(int32_t index, int32_t length) override;
	virtual ::java::lang::CharSequence* subSequence(int32_t start, int32_t end) override;
	using ::java::nio::CharBuffer::toString;
	virtual $String* toString(int32_t start, int32_t end) override;
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	static int64_t ARRAY_INDEX_SCALE;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_INDEX_SCALE")
#pragma pop_macro("ARRAY_BASE_OFFSET")

#endif // _java_nio_HeapCharBuffer_h_