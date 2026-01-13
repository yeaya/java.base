#ifndef _java_lang_AbstractStringBuilder_h_
#define _java_lang_AbstractStringBuilder_h_
//$ class java.lang.AbstractStringBuilder
//$ extends java.lang.Appendable
//$ implements java.lang.CharSequence

#include <java/lang/Appendable.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>

#pragma push_macro("EMPTYVALUE")
#undef EMPTYVALUE
#pragma push_macro("MAX_ARRAY_SIZE")
#undef MAX_ARRAY_SIZE

namespace java {
	namespace lang {
		class StringBuffer;
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

namespace java {
	namespace lang {

class $export AbstractStringBuilder : public ::java::lang::Appendable, public ::java::lang::CharSequence {
	$class(AbstractStringBuilder, $PRELOAD, ::java::lang::Appendable, ::java::lang::CharSequence)
public:
	AbstractStringBuilder();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t capacity);
	void init$($String* str);
	void init$(::java::lang::CharSequence* seq);
	virtual ::java::lang::AbstractStringBuilder* append(Object$* obj);
	virtual ::java::lang::AbstractStringBuilder* append($String* str);
	virtual ::java::lang::AbstractStringBuilder* append(::java::lang::StringBuffer* sb);
	virtual ::java::lang::AbstractStringBuilder* append(::java::lang::AbstractStringBuilder* asb);
	virtual ::java::lang::AbstractStringBuilder* append(::java::lang::CharSequence* s) override;
	virtual ::java::lang::AbstractStringBuilder* append(::java::lang::CharSequence* s, int32_t start, int32_t end) override;
	virtual ::java::lang::AbstractStringBuilder* append($chars* str);
	virtual ::java::lang::AbstractStringBuilder* append($chars* str, int32_t offset, int32_t len);
	virtual ::java::lang::AbstractStringBuilder* append(bool b);
	virtual ::java::lang::AbstractStringBuilder* append(char16_t c) override;
	virtual ::java::lang::AbstractStringBuilder* append(int32_t i);
	virtual ::java::lang::AbstractStringBuilder* append(int64_t l);
	virtual ::java::lang::AbstractStringBuilder* append(float f);
	virtual ::java::lang::AbstractStringBuilder* append(double d);
	void appendChars($chars* s, int32_t off, int32_t end);
	void appendChars($String* s, int32_t off, int32_t end);
	void appendChars(::java::lang::CharSequence* s, int32_t off, int32_t end);
	virtual ::java::lang::AbstractStringBuilder* appendCodePoint(int32_t codePoint);
	::java::lang::AbstractStringBuilder* appendNull();
	virtual int32_t capacity();
	virtual char16_t charAt(int32_t index) override;
	virtual ::java::util::stream::IntStream* chars() override;
	static void checkRange(int32_t start, int32_t end, int32_t len);
	static void checkRangeSIOOBE(int32_t start, int32_t end, int32_t len);
	virtual int32_t codePointAt(int32_t index);
	virtual int32_t codePointBefore(int32_t index);
	virtual int32_t codePointCount(int32_t beginIndex, int32_t endIndex);
	virtual ::java::util::stream::IntStream* codePoints() override;
	virtual int32_t compareTo(::java::lang::AbstractStringBuilder* another);
	virtual ::java::lang::AbstractStringBuilder* delete$(int32_t start, int32_t end);
	virtual ::java::lang::AbstractStringBuilder* deleteCharAt(int32_t index);
	virtual void ensureCapacity(int32_t minimumCapacity);
	void ensureCapacityInternal(int32_t minimumCapacity);
	virtual void getBytes($bytes* dst, int32_t dstBegin, int8_t coder);
	virtual void getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin);
	int8_t getCoder();
	$bytes* getValue();
	virtual int32_t indexOf($String* str);
	virtual int32_t indexOf($String* str, int32_t fromIndex);
	void inflate();
	virtual void initBytes($chars* value, int32_t off, int32_t len);
	virtual ::java::lang::AbstractStringBuilder* insert(int32_t index, $chars* str, int32_t offset, int32_t len);
	virtual ::java::lang::AbstractStringBuilder* insert(int32_t offset, Object$* obj);
	virtual ::java::lang::AbstractStringBuilder* insert(int32_t offset, $String* str);
	virtual ::java::lang::AbstractStringBuilder* insert(int32_t offset, $chars* str);
	virtual ::java::lang::AbstractStringBuilder* insert(int32_t dstOffset, ::java::lang::CharSequence* s);
	virtual ::java::lang::AbstractStringBuilder* insert(int32_t dstOffset, ::java::lang::CharSequence* s, int32_t start, int32_t end);
	virtual ::java::lang::AbstractStringBuilder* insert(int32_t offset, bool b);
	virtual ::java::lang::AbstractStringBuilder* insert(int32_t offset, char16_t c);
	virtual ::java::lang::AbstractStringBuilder* insert(int32_t offset, int32_t i);
	virtual ::java::lang::AbstractStringBuilder* insert(int32_t offset, int64_t l);
	virtual ::java::lang::AbstractStringBuilder* insert(int32_t offset, float f);
	virtual ::java::lang::AbstractStringBuilder* insert(int32_t offset, double d);
	bool isLatin1();
	::java::util::Spliterator$OfInt* lambda$chars$0();
	::java::util::Spliterator$OfInt* lambda$codePoints$1();
	virtual int32_t lastIndexOf($String* str);
	virtual int32_t lastIndexOf($String* str, int32_t fromIndex);
	virtual int32_t length() override;
	int32_t newCapacity(int32_t minCapacity);
	virtual int32_t offsetByCodePoints(int32_t index, int32_t codePointOffset);
	void putCharsAt(int32_t index, $chars* s, int32_t off, int32_t end);
	void putCharsAt(int32_t index, ::java::lang::CharSequence* s, int32_t off, int32_t end);
	void putStringAt(int32_t index, $String* str, int32_t off, int32_t end);
	void putStringAt(int32_t index, $String* str);
	virtual ::java::lang::AbstractStringBuilder* replace(int32_t start, int32_t end, $String* str);
	virtual ::java::lang::AbstractStringBuilder* reverse();
	virtual void setCharAt(int32_t index, char16_t ch);
	virtual void setLength(int32_t newLength);
	void shift(int32_t offset, int32_t n);
	virtual ::java::lang::CharSequence* subSequence(int32_t start, int32_t end) override;
	virtual $String* substring(int32_t start);
	virtual $String* substring(int32_t start, int32_t end);
	virtual $String* toString() override;
	virtual void trimToSize();
	$bytes* value = nullptr;
	int8_t coder = 0;
	int32_t count = 0;
	static $bytes* EMPTYVALUE;
	static const int32_t MAX_ARRAY_SIZE = 0x7FFFFFF7; // Integer.MAX_VALUE - 8
};

	} // lang
} // java

#pragma pop_macro("EMPTYVALUE")
#pragma pop_macro("MAX_ARRAY_SIZE")

#endif // _java_lang_AbstractStringBuilder_h_