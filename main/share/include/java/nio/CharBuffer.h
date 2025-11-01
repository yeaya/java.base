#ifndef _java_nio_CharBuffer_h_
#define _java_nio_CharBuffer_h_
//$ class java.nio.CharBuffer
//$ extends java.nio.Buffer
//$ implements java.lang.Comparable,java.lang.Appendable,java.lang.CharSequence,java.lang.Readable

#include <java/lang/Appendable.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Comparable.h>
#include <java/lang/Readable.h>
#include <java/nio/Buffer.h>

#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET

namespace java {
	namespace nio {
		class ByteOrder;
	}
}
namespace java {
	namespace util {
		class Spliterator$OfInt;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class IntStream;
		}
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

class $import CharBuffer : public ::java::nio::Buffer, public ::java::lang::Comparable, public ::java::lang::Appendable, public ::java::lang::CharSequence, public ::java::lang::Readable {
	$class(CharBuffer, 0, ::java::nio::Buffer, ::java::lang::Comparable, ::java::lang::Appendable, ::java::lang::CharSequence, ::java::lang::Readable)
public:
	CharBuffer();
	using ::java::nio::Buffer::limit;
	virtual $Object* clone() override;
	virtual ::java::nio::CharBuffer* duplicate() override {return nullptr;}
	virtual void finalize() override;
	virtual bool isDirect() override {return false;}
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $chars* hb, int32_t offset, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($chars* hb, int64_t addr, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	static ::java::nio::CharBuffer* allocate(int32_t capacity);
	virtual ::java::lang::Appendable* append(::java::lang::CharSequence* csq) override;
	virtual ::java::lang::Appendable* append(::java::lang::CharSequence* csq, int32_t start, int32_t end) override;
	virtual ::java::lang::Appendable* append(char16_t c) override;
	virtual $Object* array() override;
	virtual int32_t arrayOffset() override;
	virtual ::java::nio::CharBuffer* asReadOnlyBuffer() {return nullptr;}
	virtual $Object* base() override;
	virtual char16_t charAt(int32_t index) override;
	virtual ::java::nio::ByteOrder* charRegionOrder() {return nullptr;}
	virtual ::java::util::stream::IntStream* chars() override;
	virtual ::java::nio::CharBuffer* clear() override;
	virtual ::java::nio::CharBuffer* compact() {return nullptr;}
	static int32_t compare(char16_t x, char16_t y);
	virtual int32_t compareTo(::java::nio::CharBuffer* that);
	virtual int32_t compareTo(Object$* that) override;
	virtual bool equals(Object$* ob) override;
	virtual ::java::nio::CharBuffer* flip() override;
	virtual char16_t get() {return 0;}
	virtual char16_t get(int32_t index) {return 0;}
	virtual ::java::nio::CharBuffer* get($chars* dst, int32_t offset, int32_t length);
	virtual ::java::nio::CharBuffer* get($chars* dst);
	virtual ::java::nio::CharBuffer* get(int32_t index, $chars* dst, int32_t offset, int32_t length);
	virtual ::java::nio::CharBuffer* get(int32_t index, $chars* dst);
	::java::nio::CharBuffer* getArray(int32_t index, $chars* dst, int32_t offset, int32_t length);
	virtual char16_t getUnchecked(int32_t index) {return 0;}
	virtual bool hasArray() override;
	virtual int32_t hashCode() override;
	virtual bool isAddressable();
	virtual bool isEmpty() override;
	::java::util::Spliterator$OfInt* lambda$chars$0();
	virtual int32_t length() override;
	virtual ::java::nio::CharBuffer* limit(int32_t newLimit) override;
	virtual ::java::nio::CharBuffer* mark() override;
	virtual int32_t mismatch(::java::nio::CharBuffer* that);
	virtual ::java::nio::ByteOrder* order() {return nullptr;}
	using ::java::nio::Buffer::position;
	virtual ::java::nio::CharBuffer* position(int32_t newPosition) override;
	virtual ::java::nio::CharBuffer* put(char16_t c) {return nullptr;}
	virtual ::java::nio::CharBuffer* put(int32_t index, char16_t c) {return nullptr;}
	virtual ::java::nio::CharBuffer* put(::java::nio::CharBuffer* src);
	virtual ::java::nio::CharBuffer* put(int32_t index, ::java::nio::CharBuffer* src, int32_t offset, int32_t length);
	virtual ::java::nio::CharBuffer* put($chars* src, int32_t offset, int32_t length);
	::java::nio::CharBuffer* put($chars* src);
	virtual ::java::nio::CharBuffer* put(int32_t index, $chars* src, int32_t offset, int32_t length);
	virtual ::java::nio::CharBuffer* put(int32_t index, $chars* src);
	virtual ::java::nio::CharBuffer* put($String* src, int32_t start, int32_t end);
	::java::nio::CharBuffer* put($String* src);
	::java::nio::CharBuffer* putArray(int32_t index, $chars* src, int32_t offset, int32_t length);
	virtual void putBuffer(int32_t pos, ::java::nio::CharBuffer* src, int32_t srcPos, int32_t n);
	virtual int32_t read(::java::nio::CharBuffer* target) override;
	virtual ::java::nio::CharBuffer* reset() override;
	virtual ::java::nio::CharBuffer* rewind() override;
	virtual ::java::nio::CharBuffer* slice() override {return nullptr;}
	virtual ::java::nio::CharBuffer* slice(int32_t index, int32_t length) override {return nullptr;}
	virtual ::java::lang::CharSequence* subSequence(int32_t start, int32_t end) override {return nullptr;}
	virtual $String* toString() override;
	virtual $String* toString(int32_t start, int32_t end) {return nullptr;}
	static ::java::nio::CharBuffer* wrap($chars* array, int32_t offset, int32_t length);
	static ::java::nio::CharBuffer* wrap($chars* array);
	static ::java::nio::CharBuffer* wrap(::java::lang::CharSequence* csq, int32_t start, int32_t end);
	static ::java::nio::CharBuffer* wrap(::java::lang::CharSequence* csq);
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	$chars* hb = nullptr;
	int32_t offset = 0;
	bool isReadOnly$ = false;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")

#endif // _java_nio_CharBuffer_h_