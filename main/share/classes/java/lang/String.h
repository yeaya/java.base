#ifndef _java_lang_String_h_
#define _java_lang_String_h_
//$ class java.lang.String
//$ extends java.io.Serializable
//$ implements java.lang.Comparable,java.lang.CharSequence,java.lang.constant.Constable,java.lang.constant.ConstantDesc

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Comparable.h>
#include <java/lang/constant/Constable.h>
#include <java/lang/constant/ConstantDesc.h>

#pragma push_macro("CASE_INSENSITIVE_ORDER")
#undef CASE_INSENSITIVE_ORDER
#pragma push_macro("COMPACT_STRINGS")
#undef COMPACT_STRINGS
#pragma push_macro("LATIN1")
#undef LATIN1
#pragma push_macro("REPL")
#undef REPL
#pragma push_macro("UTF16")
#undef UTF16

namespace java {
	namespace io {
		class ObjectStreamField;
	}
}
namespace java {
	namespace lang {
		class AbstractStringBuilder;
		class Iterable;
		class StringBuffer;
		class StringBuilder;
		class Void;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CharsetDecoder;
		}
	}
}
namespace java {
	namespace util {
		class Comparator;
		class List;
		class Locale;
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class IntStream;
			class Stream;
		}
	}
}

namespace java {
	namespace lang {

class $export String : public ::java::io::Serializable, public ::java::lang::Comparable, public ::java::lang::CharSequence, public ::java::lang::constant::Constable, public ::java::lang::constant::ConstantDesc {
	$class(String, $PRELOAD | $PREINIT, ::java::io::Serializable, ::java::lang::Comparable, ::java::lang::CharSequence, ::java::lang::constant::Constable, ::java::lang::constant::ConstantDesc)
public:
	String();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$();
	void init$($String* original);
	void init$($chars* value);
	void init$($chars* value, int32_t offset, int32_t count);
	void init$($ints* codePoints, int32_t offset, int32_t count);
	void init$($bytes* ascii, int32_t hibyte, int32_t offset, int32_t count);
	void init$($bytes* ascii, int32_t hibyte);
	void init$($bytes* bytes, int32_t offset, int32_t length, $String* charsetName);
	void init$($bytes* bytes, int32_t offset, int32_t length, ::java::nio::charset::Charset* charset);
	void init$($bytes* bytes, $String* charsetName);
	void init$($bytes* bytes, ::java::nio::charset::Charset* charset);
	void init$($bytes* bytes, int32_t offset, int32_t length);
	void init$($bytes* bytes);
	void init$(::java::lang::StringBuffer* buffer);
	void init$(::java::lang::StringBuilder* builder);
	void init$($chars* value, int32_t off, int32_t len, ::java::lang::Void* sig);
	void init$(::java::lang::AbstractStringBuilder* asb, ::java::lang::Void* sig);
	void init$($bytes* value, int8_t coder);
	virtual char16_t charAt(int32_t index) override;
	virtual ::java::util::stream::IntStream* chars() override;
	static void checkBoundsBeginEnd(int32_t begin, int32_t end, int32_t length);
	static void checkBoundsOffCount(int32_t offset, int32_t count, int32_t length);
	static void checkIndex(int32_t index, int32_t length);
	static void checkOffset(int32_t offset, int32_t length);
	int32_t codePointAt(int32_t index);
	int32_t codePointBefore(int32_t index);
	int32_t codePointCount(int32_t beginIndex, int32_t endIndex);
	virtual ::java::util::stream::IntStream* codePoints() override;
	int8_t coder();
	int32_t compareTo($String* anotherString);
	virtual int32_t compareTo(Object$* anotherString) override;
	int32_t compareToIgnoreCase($String* str);
	$String* concat($String* str);
	bool contains(::java::lang::CharSequence* s);
	bool contentEquals(::java::lang::StringBuffer* sb);
	bool contentEquals(::java::lang::CharSequence* cs);
	static $String* copyValueOf($chars* data, int32_t offset, int32_t count);
	static $String* copyValueOf($chars* data);
	static char16_t decode2(int32_t b1, int32_t b2);
	static char16_t decode3(int32_t b1, int32_t b2, int32_t b3);
	static int32_t decode4(int32_t b1, int32_t b2, int32_t b3, int32_t b4);
	static int32_t decodeASCII($bytes* sa, int32_t sp, $chars* da, int32_t dp, int32_t len);
	static int32_t decodeUTF8_UTF16($bytes* src, int32_t sp, int32_t sl, $bytes* dst, int32_t dp, bool doReplace);
	static int32_t decodeWithDecoder(::java::nio::charset::CharsetDecoder* cd, $chars* dst, $bytes* src, int32_t offset, int32_t length);
	virtual ::java::util::Optional* describeConstable() override;
	static $bytes* encode(::java::nio::charset::Charset* cs, int8_t coder, $bytes* val);
	static $bytes* encode8859_1(int8_t coder, $bytes* val);
	static $bytes* encode8859_1(int8_t coder, $bytes* val, bool doReplace);
	static $bytes* encodeASCII(int8_t coder, $bytes* val);
	static $bytes* encodeUTF8(int8_t coder, $bytes* val, bool doReplace);
	static $bytes* encodeUTF8_UTF16($bytes* val, bool doReplace);
	static $bytes* encodeWithEncoder(::java::nio::charset::Charset* cs, int8_t coder, $bytes* val, bool doReplace);
	bool endsWith($String* suffix);
	virtual bool equals(Object$* anObject) override;
	bool equalsIgnoreCase($String* anotherString);
	static $String* format($String* format, $ObjectArray* args);
	static $String* format(::java::util::Locale* l, $String* format, $ObjectArray* args);
	$String* formatted($ObjectArray* args);
	void getBytes(int32_t srcBegin, int32_t srcEnd, $bytes* dst, int32_t dstBegin);
	$bytes* getBytes($String* charsetName);
	$bytes* getBytes(::java::nio::charset::Charset* charset);
	$bytes* getBytes();
	void getBytes($bytes* dst, int32_t dstBegin, int8_t coder);
	void getBytes($bytes* dst, int32_t srcPos, int32_t dstBegin, int8_t coder, int32_t length);
	static $bytes* getBytesNoRepl($String* s, ::java::nio::charset::Charset* cs);
	static $bytes* getBytesNoRepl1($String* s, ::java::nio::charset::Charset* cs);
	static $bytes* getBytesUTF8NoRepl($String* s);
	void getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin);
	virtual int32_t hashCode() override;
	$String* indent(int32_t n);
	int32_t indexOf(int32_t ch);
	int32_t indexOf(int32_t ch, int32_t fromIndex);
	int32_t indexOf($String* str);
	int32_t indexOf($String* str, int32_t fromIndex);
	static int32_t indexOf($bytes* src, int8_t srcCoder, int32_t srcCount, $String* tgtStr, int32_t fromIndex);
	int32_t indexOfNonWhitespace();
	$String* intern();
	static bool isASCII($bytes* src);
	bool isBlank();
	virtual bool isEmpty() override;
	bool isLatin1();
	static bool isMalformed3(int32_t b1, int32_t b2, int32_t b3);
	static bool isMalformed3_2(int32_t b1, int32_t b2);
	static bool isMalformed4(int32_t b2, int32_t b3, int32_t b4);
	static bool isMalformed4_2(int32_t b1, int32_t b2);
	static bool isMalformed4_3(int32_t b3);
	static bool isNotContinuation(int32_t b);
	static $String* join(::java::lang::CharSequence* delimiter, $Array<::java::lang::CharSequence>* elements);
	static $String* join($String* prefix, $String* suffix, $String* delimiter, $StringArray* elements, int32_t size);
	static $String* join(::java::lang::CharSequence* delimiter, ::java::lang::Iterable* elements);
	static $String* lambda$indent$0($String* spaces, $String* s);
	static $String* lambda$indent$1($String* s);
	static $String* lambda$indent$2(int32_t n, $String* s);
	static $String* lambda$stripIndent$3(int32_t outdent, $String* line);
	int32_t lastIndexOf(int32_t ch);
	int32_t lastIndexOf(int32_t ch, int32_t fromIndex);
	int32_t lastIndexOf($String* str);
	int32_t lastIndexOf($String* str, int32_t fromIndex);
	static int32_t lastIndexOf($bytes* src, int8_t srcCoder, int32_t srcCount, $String* tgtStr, int32_t fromIndex);
	int32_t lastIndexOfNonWhitespace();
	virtual int32_t length() override;
	::java::util::stream::Stream* lines();
	static ::java::nio::charset::Charset* lookupCharset($String* csn);
	static int32_t malformed3($bytes* src, int32_t sp);
	static int32_t malformed4($bytes* src, int32_t sp);
	bool matches($String* regex);
	static $String* newStringNoRepl($bytes* src, ::java::nio::charset::Charset* cs);
	static $String* newStringNoRepl1($bytes* src, ::java::nio::charset::Charset* cs);
	static $String* newStringUTF8NoRepl($bytes* bytes, int32_t offset, int32_t length);
	bool nonSyncContentEquals(::java::lang::AbstractStringBuilder* sb);
	int32_t offsetByCodePoints(int32_t index, int32_t codePointOffset);
	static int32_t outdent(::java::util::List* lines);
	static ::java::lang::Void* rangeCheck($chars* value, int32_t offset, int32_t count);
	bool regionMatches(int32_t toffset, $String* other, int32_t ooffset, int32_t len);
	bool regionMatches(bool ignoreCase, int32_t toffset, $String* other, int32_t ooffset, int32_t len);
	$String* repeat(int32_t count);
	$String* replace(char16_t oldChar, char16_t newChar);
	$String* replace(::java::lang::CharSequence* target, ::java::lang::CharSequence* replacement);
	$String* replaceAll($String* regex, $String* replacement);
	$String* replaceFirst($String* regex, $String* replacement);
	virtual $Object* resolveConstantDesc(::java::lang::invoke::MethodHandles$Lookup* lookup) override;
	static $bytes* safeTrim($bytes* ba, int32_t len, bool isTrusted);
	static int32_t scale(int32_t len, float expansionFactor);
	$StringArray* split($String* regex, int32_t limit);
	$StringArray* split($String* regex);
	bool startsWith($String* prefix, int32_t toffset);
	bool startsWith($String* prefix);
	$String* strip();
	$String* stripIndent();
	$String* stripLeading();
	$String* stripTrailing();
	virtual ::java::lang::CharSequence* subSequence(int32_t beginIndex, int32_t endIndex) override;
	$String* substring(int32_t beginIndex);
	$String* substring(int32_t beginIndex, int32_t endIndex);
	static void throwMalformed(int32_t off, int32_t nb);
	static void throwMalformed($bytes* val);
	static void throwUnmappable(int32_t off);
	static void throwUnmappable($bytes* val);
	$chars* toCharArray();
	$String* toLowerCase(::java::util::Locale* locale);
	$String* toLowerCase();
	virtual $String* toString() override;
	$String* toUpperCase(::java::util::Locale* locale);
	$String* toUpperCase();
	$Object* transform(::java::util::function::Function* f);
	$String* translateEscapes();
	$String* trim();
	$bytes* value();
	static $String* valueOf(Object$* obj);
	static $String* valueOf($chars* data);
	static $String* valueOf($chars* data, int32_t offset, int32_t count);
	static $String* valueOf(bool b);
	static $String* valueOf(char16_t c);
	static $String* valueOf(int32_t i);
	static $String* valueOf(int64_t l);
	static $String* valueOf(float f);
	static $String* valueOf(double d);
	static $String* valueOfCodePoint(int32_t codePoint);
	$bytes* value$ = nullptr;
	int32_t hash = 0;
	bool hashIsZero = false;
	int8_t coder$ = 0;
	static const int64_t serialVersionUID = (int64_t)0xA0F0A4387A3BB342;
	static bool COMPACT_STRINGS;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static const char16_t REPL = ((char16_t)65533);
	static ::java::util::Comparator* CASE_INSENSITIVE_ORDER;
	static const int8_t LATIN1 = 0;
	static const int8_t UTF16 = 1;
public:
	bool equals(String* s);
	bool equals(const char* s);
	bool equals(const char16_t* s);
	bool equals(::std::nullptr_t);
	bool equalsIgnoreCase(const char* anotherString);
	bool equalsIgnoreCase(const char16_t* anotherString);
	bool equalsIgnoreCase(::std::nullptr_t);
	int32_t compareTo(const char* anotherString);
	int32_t compareTo(const char16_t* anotherString);
	int32_t compareTo(::std::nullptr_t);
	int32_t compareToIgnoreCase(const char* anotherString);
	int32_t compareToIgnoreCase(const char16_t* anotherString);
	int32_t compareToIgnoreCase(::std::nullptr_t);
	bool startsWith(const char* prefix, int32_t toffset);
	bool startsWith(::std::nullptr_t, int32_t toffset);
	bool startsWith(const char* prefix);
	bool startsWith(::std::nullptr_t);
	bool endsWith(const char* suffix);
	bool endsWith(::std::nullptr_t);
	int32_t indexOf(const char* str);
	int32_t indexOf(::std::nullptr_t);
	int32_t indexOf(const char* str, int32_t fromIndex);
	int32_t indexOf(::std::nullptr_t, int32_t fromIndex);
	int32_t lastIndexOf(const char* str);
	int32_t lastIndexOf(::std::nullptr_t);
	int32_t lastIndexOf(const char* str, int32_t fromIndex);
	int32_t lastIndexOf(::std::nullptr_t, int32_t fromIndex);

	String* concat(const char* str);
	String* concat(::std::nullptr_t);
	bool matches(const char* regex);
	bool matches(::std::nullptr_t);
	bool contains(const char* s);
	bool contains(::std::nullptr_t);
	String* replaceFirst(const char* regex, const char* replacement);
	String* replaceAll(const char* regex, const char* replacement);
	String* replace(const char* target, const char* replacement);
	$StringArray* split(const char* regex, int32_t limit);
	$StringArray* split(::std::nullptr_t, int32_t limit);
	$StringArray* split(const char* regex);
	$StringArray* split(::std::nullptr_t);

	const char* c_str();
	int32_t utf8Size();
	$bytes* utf8Bytes();
	char* utf8String(char* buf, int32_t bufLen);

	static String* literalOf(const char* literal);
	static String* literalOf(const char* literal, int32_t length);
	static String* literalOf(const char16_t* literal);
	static String* literalOf(const char16_t* literal, int32_t length);
	static String* constValueOf(::std::nullptr_t);
	static String* constValueOf(const char* s);
	static String* constValueOf(const char* s, int32_t length);
	static String* constValueOf(const char16_t* s);
	static String* constValueOf(const char16_t* s, int32_t length);
	static String* constValueOf(const ::std::initializer_list<int32_t>& codePoints);
	static String* valueOf(::std::nullptr_t);
	static String* valueOf(String* s);
	static String* valueOf(const char* s);
	static String* valueOf(const char16_t* s);
	static String* valueOf(const char16_t* s, int32_t length);
	static String* valueOf(const ::std::initializer_list<int32_t>& codePoints);
	static String* valueOf(const ::std::initializer_list<Object$*>& objects);
	static String* valueOf(const ::std::initializer_list<String*>& strings);

	static String* concat(Object$* left, Object$* right);
	static String* concat(::std::nullptr_t, ::std::nullptr_t);
	static String* concat(String* left, String* right);
	static String* concat(Object$* left, const char* right);
	static String* concat(String* left, const char* right);
	static String* concat(Object$* left, const char16_t* right);
	static String* concat(String* left, const char16_t* right);
	static String* concat(const char* left, Object$* right);
	static String* concat(const char* left, String* right);
	static String* concat(const char* left, const char* right);
	static String* concat(const char* left, const char16_t* right);
	static String* concat(const char16_t* left, Object$* right);
	static String* concat(const char16_t* left, String* right);
	static String* concat(const char16_t* left, const char* right);
	static String* concat(const char16_t* left, const char16_t* right);
};

	} // lang
} // java

#pragma pop_macro("CASE_INSENSITIVE_ORDER")
#pragma pop_macro("COMPACT_STRINGS")
#pragma pop_macro("LATIN1")
#pragma pop_macro("REPL")
#pragma pop_macro("UTF16")

#endif // _java_lang_String_h_