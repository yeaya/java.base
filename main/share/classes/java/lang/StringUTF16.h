#ifndef _java_lang_StringUTF16_h_
#define _java_lang_StringUTF16_h_
//$ class java.lang.StringUTF16
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <java/lang/Integer.h>

#pragma push_macro("HI_BYTE_SHIFT")
#undef HI_BYTE_SHIFT
#pragma push_macro("LO_BYTE_SHIFT")
#undef LO_BYTE_SHIFT
#pragma push_macro("MAX_LENGTH")
#undef MAX_LENGTH
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE

namespace java {
	namespace lang {
		class CharSequence;
	}
}
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

class StringUTF16 : public ::java::lang::Object {
	$class(StringUTF16, 0, ::java::lang::Object)
public:
	StringUTF16();
	using ::java::lang::Object::hashCode;
	using ::java::lang::Object::equals;
	void init$();
	static char16_t charAt($bytes* value, int32_t index);
	static void checkBoundsBeginEnd(int32_t begin, int32_t end, $bytes* val);
	static void checkBoundsOffCount(int32_t offset, int32_t count, $bytes* val);
	static void checkIndex(int32_t off, $bytes* val);
	static void checkOffset(int32_t off, $bytes* val);
	static int32_t codePointAt($bytes* value, int32_t index, int32_t end, bool checked);
	static int32_t codePointAt($bytes* value, int32_t index, int32_t end);
	static int32_t codePointAtSB($bytes* val, int32_t index, int32_t end);
	static int32_t codePointBefore($bytes* value, int32_t index, bool checked);
	static int32_t codePointBefore($bytes* value, int32_t index);
	static int32_t codePointBeforeSB($bytes* val, int32_t index);
	static int32_t codePointCount($bytes* value, int32_t beginIndex, int32_t endIndex, bool checked);
	static int32_t codePointCount($bytes* value, int32_t beginIndex, int32_t endIndex);
	static int32_t codePointCountSB($bytes* val, int32_t beginIndex, int32_t endIndex);
	static int32_t codePointIncluding($bytes* ba, int32_t cp, int32_t index, int32_t start, int32_t end);
	static int32_t compareCodePointCI(int32_t cp1, int32_t cp2);
	static int32_t compareTo($bytes* value, $bytes* other);
	static int32_t compareTo($bytes* value, $bytes* other, int32_t len1, int32_t len2);
	static int32_t compareToCI($bytes* value, $bytes* other);
	static int32_t compareToCIImpl($bytes* value, int32_t toffset, int32_t tlen, $bytes* other, int32_t ooffset, int32_t olen);
	static int32_t compareToCI_Latin1($bytes* value, $bytes* other);
	static int32_t compareToLatin1($bytes* value, $bytes* other);
	static int32_t compareToLatin1($bytes* value, $bytes* other, int32_t len1, int32_t len2);
	static int32_t compareValues($bytes* value, $bytes* other, int32_t len1, int32_t len2);
	static $bytes* compress($chars* val, int32_t off, int32_t len);
	static $bytes* compress($bytes* val, int32_t off, int32_t len);
	static int32_t compress($chars* src, int32_t srcOff, $bytes* dst, int32_t dstOff, int32_t len);
	static int32_t compress($bytes* src, int32_t srcOff, $bytes* dst, int32_t dstOff, int32_t len);
	static bool contentEquals($bytes* v1, $bytes* v2, int32_t len);
	static bool contentEquals($bytes* value, ::java::lang::CharSequence* cs, int32_t len);
	static bool equals($bytes* value, $bytes* other);
	static void fillNull($bytes* val, int32_t index, int32_t end);
	static void getBytes($bytes* value, int32_t srcBegin, int32_t srcEnd, $bytes* dst, int32_t dstBegin);
	static char16_t getChar($bytes* val, int32_t index);
	static void getChars($bytes* value, int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin);
	static int32_t getChars(int32_t i, int32_t begin, int32_t end, $bytes* value);
	static int32_t getChars(int64_t l, int32_t begin, int32_t end, $bytes* value);
	static int32_t getChars(int32_t i, int32_t index, $bytes* buf);
	static int32_t getChars(int64_t i, int32_t index, $bytes* buf);
	static int32_t hashCode($bytes* value);
	static int32_t indexOf($bytes* value, int32_t ch, int32_t fromIndex);
	static int32_t indexOf($bytes* value, $bytes* str);
	static int32_t indexOf($bytes* value, int32_t valueCount, $bytes* str, int32_t strCount, int32_t fromIndex);
	static int32_t indexOfChar($bytes* value, int32_t ch, int32_t fromIndex, int32_t max);
	static int32_t indexOfCharUnsafe($bytes* value, int32_t ch, int32_t fromIndex, int32_t max);
	static int32_t indexOfLatin1($bytes* value, $bytes* str);
	static int32_t indexOfLatin1($bytes* src, int32_t srcCount, $bytes* tgt, int32_t tgtCount, int32_t fromIndex);
	static int32_t indexOfLatin1Unsafe($bytes* src, int32_t srcCount, $bytes* tgt, int32_t tgtCount, int32_t fromIndex);
	static int32_t indexOfNonWhitespace($bytes* value);
	static int32_t indexOfSupplementary($bytes* value, int32_t ch, int32_t fromIndex, int32_t max);
	static int32_t indexOfUnsafe($bytes* value, int32_t valueCount, $bytes* str, int32_t strCount, int32_t fromIndex);
	static void inflate($bytes* src, int32_t srcOff, $bytes* dst, int32_t dstOff, int32_t len);
	static bool isBigEndian();
	static int32_t lastIndexOf($bytes* src, int32_t srcCount, $bytes* tgt, int32_t tgtCount, int32_t fromIndex);
	static int32_t lastIndexOf($bytes* value, int32_t ch, int32_t fromIndex);
	static int32_t lastIndexOfLatin1($bytes* src, int32_t srcCount, $bytes* tgt, int32_t tgtCount, int32_t fromIndex);
	static int32_t lastIndexOfNonWhitespace($bytes* value);
	static int32_t lastIndexOfSupplementary($bytes* value, int32_t ch, int32_t fromIndex);
	static int32_t length($bytes* value);
	static ::java::util::stream::Stream* lines($bytes* value);
	static $bytes* newBytesFor(int32_t len);
	static $String* newString($bytes* val, int32_t index, int32_t len);
	static void putChar($bytes* val, int32_t index, int32_t c);
	static void putCharSB($bytes* val, int32_t index, int32_t c);
	static void putChars($bytes* val, int32_t index, $chars* str, int32_t off, int32_t end);
	static int32_t putCharsAt($bytes* value, int32_t i, char16_t c1, char16_t c2, char16_t c3, char16_t c4);
	static int32_t putCharsAt($bytes* value, int32_t i, char16_t c1, char16_t c2, char16_t c3, char16_t c4, char16_t c5);
	static void putCharsSB($bytes* val, int32_t index, $chars* ca, int32_t off, int32_t end);
	static void putCharsSB($bytes* val, int32_t index, ::java::lang::CharSequence* s, int32_t off, int32_t end);
	static bool regionMatchesCI($bytes* value, int32_t toffset, $bytes* other, int32_t ooffset, int32_t len);
	static bool regionMatchesCI_Latin1($bytes* value, int32_t toffset, $bytes* other, int32_t ooffset, int32_t len);
	static $String* replace($bytes* value, char16_t oldChar, char16_t newChar);
	static $String* replace($bytes* value, int32_t valLen, bool valLat1, $bytes* targ, int32_t targLen, bool targLat1, $bytes* repl, int32_t replLen, bool replLat1);
	static void reverse($bytes* val, int32_t count);
	static void reverseAllValidSurrogatePairs($bytes* val, int32_t count);
	static $String* strip($bytes* value);
	static $String* stripLeading($bytes* value);
	static $String* stripTrailing($bytes* value);
	static $bytes* toBytes($chars* value, int32_t off, int32_t len);
	static $bytes* toBytes($ints* val, int32_t index, int32_t len);
	static $bytes* toBytes(char16_t c);
	static $bytes* toBytesSupplementary(int32_t cp);
	static $chars* toChars($bytes* value);
	static $String* toLowerCase($String* str, $bytes* value, ::java::util::Locale* locale);
	static $String* toLowerCaseEx($String* str, $bytes* value, $bytes* result, int32_t first, ::java::util::Locale* locale, bool localeDependent);
	static $String* toUpperCase($String* str, $bytes* value, ::java::util::Locale* locale);
	static $String* toUpperCaseEx($String* str, $bytes* value, $bytes* result, int32_t first, ::java::util::Locale* locale, bool localeDependent);
	static $String* trim($bytes* value);
	static bool $assertionsDisabled;
	static int32_t HI_BYTE_SHIFT;
	static int32_t LO_BYTE_SHIFT;
	static const int32_t MAX_LENGTH = 0x3FFFFFFF; // ::java::lang::Integer::MAX_VALUE >> 1
};

	} // lang
} // java

#pragma pop_macro("HI_BYTE_SHIFT")
#pragma pop_macro("LO_BYTE_SHIFT")
#pragma pop_macro("MAX_LENGTH")
#pragma pop_macro("MAX_VALUE")

#endif // _java_lang_StringUTF16_h_