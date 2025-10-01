#ifndef _java_lang_StringLatin1_h_
#define _java_lang_StringLatin1_h_
//$ class java.lang.StringLatin1
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Locale;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace lang {

class StringLatin1 : public ::java::lang::Object {
	$class(StringLatin1, $PREINIT, ::java::lang::Object)
public:
	StringLatin1();
	using ::java::lang::Object::hashCode;
	using ::java::lang::Object::equals;
	void init$();
	static bool canEncode(int32_t cp);
	static char16_t charAt($bytes* value, int32_t index);
	static int32_t codePointAt($bytes* value, int32_t index, int32_t end);
	static int32_t codePointBefore($bytes* value, int32_t index);
	static int32_t codePointCount($bytes* value, int32_t beginIndex, int32_t endIndex);
	static int32_t compareTo($bytes* value, $bytes* other);
	static int32_t compareTo($bytes* value, $bytes* other, int32_t len1, int32_t len2);
	static int32_t compareToCI($bytes* value, $bytes* other);
	static int32_t compareToCI_UTF16($bytes* value, $bytes* other);
	static int32_t compareToUTF16($bytes* value, $bytes* other);
	static int32_t compareToUTF16($bytes* value, $bytes* other, int32_t len1, int32_t len2);
	static int32_t compareToUTF16Values($bytes* value, $bytes* other, int32_t len1, int32_t len2);
	static bool equals($bytes* value, $bytes* other);
	static void fillNull($bytes* val, int32_t index, int32_t end);
	static void getBytes($bytes* value, int32_t srcBegin, int32_t srcEnd, $bytes* dst, int32_t dstBegin);
	static char16_t getChar($bytes* val, int32_t index);
	static void getChars($bytes* value, int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin);
	static int32_t hashCode($bytes* value);
	static int32_t indexOf($bytes* value, int32_t ch, int32_t fromIndex);
	static int32_t indexOf($bytes* value, $bytes* str);
	static int32_t indexOf($bytes* value, int32_t valueCount, $bytes* str, int32_t strCount, int32_t fromIndex);
	static int32_t indexOfChar($bytes* value, int32_t ch, int32_t fromIndex, int32_t max);
	static int32_t indexOfNonWhitespace($bytes* value);
	static $bytes* inflate($bytes* value, int32_t off, int32_t len);
	static void inflate($bytes* src, int32_t srcOff, $chars* dst, int32_t dstOff, int32_t len);
	static void inflate($bytes* src, int32_t srcOff, $bytes* dst, int32_t dstOff, int32_t len);
	static int32_t lastIndexOf($bytes* src, int32_t srcCount, $bytes* tgt, int32_t tgtCount, int32_t fromIndex);
	static int32_t lastIndexOf($bytes* value, int32_t ch, int32_t fromIndex);
	static int32_t lastIndexOfNonWhitespace($bytes* value);
	static int32_t length($bytes* value);
	static ::java::util::stream::Stream* lines($bytes* value);
	static $String* newString($bytes* val, int32_t index, int32_t len);
	static void putChar($bytes* val, int32_t index, int32_t c);
	static bool regionMatchesCI($bytes* value, int32_t toffset, $bytes* other, int32_t ooffset, int32_t len);
	static bool regionMatchesCI_UTF16($bytes* value, int32_t toffset, $bytes* other, int32_t ooffset, int32_t len);
	static $String* replace($bytes* value, char16_t oldChar, char16_t newChar);
	static $String* replace($bytes* value, int32_t valLen, $bytes* targ, int32_t targLen, $bytes* repl, int32_t replLen);
	static $String* strip($bytes* value);
	static $String* stripLeading($bytes* value);
	static $String* stripTrailing($bytes* value);
	static $bytes* toBytes($ints* val, int32_t off, int32_t len);
	static $bytes* toBytes(char16_t c);
	static $chars* toChars($bytes* value);
	static $String* toLowerCase($String* str, $bytes* value, ::java::util::Locale* locale);
	static $String* toLowerCaseEx($String* str, $bytes* value, int32_t first, ::java::util::Locale* locale, bool localeDependent);
	static $String* toUpperCase($String* str, $bytes* value, ::java::util::Locale* locale);
	static $String* toUpperCaseEx($String* str, $bytes* value, int32_t first, ::java::util::Locale* locale, bool localeDependent);
	static $String* trim($bytes* value);
	static bool $assertionsDisabled;
};

	} // lang
} // java

#endif // _java_lang_StringLatin1_h_