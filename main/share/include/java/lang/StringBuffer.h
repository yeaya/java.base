#ifndef _java_lang_StringBuffer_h_
#define _java_lang_StringBuffer_h_
//$ class java.lang.StringBuffer
//$ extends java.lang.AbstractStringBuilder
//$ implements java.io.Serializable,java.lang.Comparable

#include <java/io/Serializable.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/Array.h>
#include <java/lang/Comparable.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace lang {
		class CharSequence;
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

class $import StringBuffer : public ::java::lang::AbstractStringBuilder, public ::java::io::Serializable, public ::java::lang::Comparable {
	$class(StringBuffer, 0, ::java::lang::AbstractStringBuilder, ::java::io::Serializable, ::java::lang::Comparable)
public:
	StringBuffer();
	using ::java::lang::AbstractStringBuilder::compareTo;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t capacity);
	void init$($String* str);
	void init$(::java::lang::CharSequence* seq);
	virtual ::java::lang::StringBuffer* append(Object$* obj) override;
	virtual ::java::lang::StringBuffer* append($String* str) override;
	virtual ::java::lang::StringBuffer* append(::java::lang::StringBuffer* sb) override;
	virtual ::java::lang::StringBuffer* append(::java::lang::AbstractStringBuilder* asb) override;
	virtual ::java::lang::StringBuffer* append(::java::lang::CharSequence* s) override;
	virtual ::java::lang::StringBuffer* append(::java::lang::CharSequence* s, int32_t start, int32_t end) override;
	virtual ::java::lang::StringBuffer* append($chars* str) override;
	virtual ::java::lang::StringBuffer* append($chars* str, int32_t offset, int32_t len) override;
	virtual ::java::lang::StringBuffer* append(bool b) override;
	virtual ::java::lang::StringBuffer* append(char16_t c) override;
	virtual ::java::lang::StringBuffer* append(int32_t i) override;
	virtual ::java::lang::StringBuffer* append(int64_t lng) override;
	virtual ::java::lang::StringBuffer* append(float f) override;
	virtual ::java::lang::StringBuffer* append(double d) override;
	virtual ::java::lang::StringBuffer* appendCodePoint(int32_t codePoint) override;
	virtual int32_t capacity() override;
	virtual char16_t charAt(int32_t index) override;
	virtual ::java::util::stream::IntStream* chars() override;
	virtual int32_t codePointAt(int32_t index) override;
	virtual int32_t codePointBefore(int32_t index) override;
	virtual int32_t codePointCount(int32_t beginIndex, int32_t endIndex) override;
	virtual ::java::util::stream::IntStream* codePoints() override;
	int32_t compareTo(::java::lang::StringBuffer* another);
	virtual int32_t compareTo(Object$* another) override;
	virtual ::java::lang::StringBuffer* delete$(int32_t start, int32_t end) override;
	virtual ::java::lang::StringBuffer* deleteCharAt(int32_t index) override;
	virtual void ensureCapacity(int32_t minimumCapacity) override;
	virtual void getBytes($bytes* dst, int32_t dstBegin, int8_t coder) override;
	virtual void getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) override;
	virtual int32_t indexOf($String* str) override;
	virtual int32_t indexOf($String* str, int32_t fromIndex) override;
	virtual ::java::lang::StringBuffer* insert(int32_t index, $chars* str, int32_t offset, int32_t len) override;
	virtual ::java::lang::StringBuffer* insert(int32_t offset, Object$* obj) override;
	virtual ::java::lang::StringBuffer* insert(int32_t offset, $String* str) override;
	virtual ::java::lang::StringBuffer* insert(int32_t offset, $chars* str) override;
	virtual ::java::lang::StringBuffer* insert(int32_t dstOffset, ::java::lang::CharSequence* s) override;
	virtual ::java::lang::StringBuffer* insert(int32_t dstOffset, ::java::lang::CharSequence* s, int32_t start, int32_t end) override;
	virtual ::java::lang::StringBuffer* insert(int32_t offset, bool b) override;
	virtual ::java::lang::StringBuffer* insert(int32_t offset, char16_t c) override;
	virtual ::java::lang::StringBuffer* insert(int32_t offset, int32_t i) override;
	virtual ::java::lang::StringBuffer* insert(int32_t offset, int64_t l) override;
	virtual ::java::lang::StringBuffer* insert(int32_t offset, float f) override;
	virtual ::java::lang::StringBuffer* insert(int32_t offset, double d) override;
	virtual int32_t lastIndexOf($String* str) override;
	virtual int32_t lastIndexOf($String* str, int32_t fromIndex) override;
	virtual int32_t length() override;
	virtual int32_t offsetByCodePoints(int32_t index, int32_t codePointOffset) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual ::java::lang::StringBuffer* replace(int32_t start, int32_t end, $String* str) override;
	virtual ::java::lang::StringBuffer* reverse() override;
	virtual void setCharAt(int32_t index, char16_t ch) override;
	virtual void setLength(int32_t newLength) override;
	virtual ::java::lang::CharSequence* subSequence(int32_t start, int32_t end) override;
	virtual $String* substring(int32_t start) override;
	virtual $String* substring(int32_t start, int32_t end) override;
	virtual $String* toString() override;
	virtual void trimToSize() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	$String* toStringCache = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x2F0707D9EAC8EAD3;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
public:
	StringBuffer* append(const char* s);
};

	} // lang
} // java

#endif // _java_lang_StringBuffer_h_