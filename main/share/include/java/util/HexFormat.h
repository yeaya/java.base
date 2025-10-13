#ifndef _java_util_HexFormat_h_
#define _java_util_HexFormat_h_
//$ class java.util.HexFormat
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DIGITS")
#undef DIGITS
#pragma push_macro("EMPTY_BYTES")
#undef EMPTY_BYTES
#pragma push_macro("HEX_FORMAT")
#undef HEX_FORMAT
#pragma push_macro("LOWERCASE_DIGITS")
#undef LOWERCASE_DIGITS
#pragma push_macro("UPPERCASE_DIGITS")
#undef UPPERCASE_DIGITS

namespace java {
	namespace lang {
		class Appendable;
		class CharSequence;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}

namespace java {
	namespace util {

class $import HexFormat : public ::java::lang::Object {
	$class(HexFormat, 0, ::java::lang::Object)
public:
	HexFormat();
	void init$($String* delimiter, $String* prefix, $String* suffix, $bytes* digits);
	static int32_t checkDigitCount(int32_t fromIndex, int32_t toIndex, int32_t limit);
	static void checkLiteral(::java::lang::CharSequence* string, int32_t index, $String* literal);
	static int32_t checkMaxArraySize(int64_t length);
	$String* delimiter();
	virtual bool equals(Object$* o) override;
	static $String* escapeNL($String* string);
	$String* formatHex($bytes* bytes);
	$String* formatHex($bytes* bytes, int32_t fromIndex, int32_t toIndex);
	::java::lang::Appendable* formatHex(::java::lang::Appendable* out, $bytes* bytes);
	::java::lang::Appendable* formatHex(::java::lang::Appendable* out, $bytes* bytes, int32_t fromIndex, int32_t toIndex);
	$String* formatOptDelimiter($bytes* bytes, int32_t fromIndex, int32_t toIndex);
	static int32_t fromHexDigit(int32_t ch);
	static int32_t fromHexDigits(::java::lang::CharSequence* string, int32_t index);
	static int32_t fromHexDigits(::java::lang::CharSequence* string);
	static int32_t fromHexDigits(::java::lang::CharSequence* string, int32_t fromIndex, int32_t toIndex);
	static int64_t fromHexDigitsToLong(::java::lang::CharSequence* string);
	static int64_t fromHexDigitsToLong(::java::lang::CharSequence* string, int32_t fromIndex, int32_t toIndex);
	virtual int32_t hashCode() override;
	static bool isHexDigit(int32_t ch);
	bool isUpperCase();
	static ::java::util::HexFormat* of();
	static ::java::util::HexFormat* ofDelimiter($String* delimiter);
	$bytes* parseHex(::java::lang::CharSequence* string);
	$bytes* parseHex(::java::lang::CharSequence* string, int32_t fromIndex, int32_t toIndex);
	$bytes* parseHex($chars* chars, int32_t fromIndex, int32_t toIndex);
	static $bytes* parseNoDelimiter(::java::lang::CharSequence* string);
	$String* prefix();
	$String* suffix();
	::java::lang::Appendable* toHexDigits(::java::lang::Appendable* out, int8_t value);
	$String* toHexDigits(int8_t value);
	$String* toHexDigits(char16_t value);
	$String* toHexDigits(int16_t value);
	$String* toHexDigits(int32_t value);
	$String* toHexDigits(int64_t value);
	$String* toHexDigits(int64_t value, int32_t digits);
	char16_t toHighHexDigit(int32_t value);
	char16_t toLowHexDigit(int32_t value);
	virtual $String* toString() override;
	::java::util::HexFormat* withDelimiter($String* delimiter);
	::java::util::HexFormat* withLowerCase();
	::java::util::HexFormat* withPrefix($String* prefix);
	::java::util::HexFormat* withSuffix($String* suffix);
	::java::util::HexFormat* withUpperCase();
	static bool $assertionsDisabled;
	static ::jdk::internal::access::JavaLangAccess* jla;
	static $bytes* UPPERCASE_DIGITS;
	static $bytes* LOWERCASE_DIGITS;
	static $bytes* DIGITS;
	static ::java::util::HexFormat* HEX_FORMAT;
	static $bytes* EMPTY_BYTES;
	$String* delimiter$ = nullptr;
	$String* prefix$ = nullptr;
	$String* suffix$ = nullptr;
	$bytes* digits = nullptr;
};

	} // util
} // java

#pragma pop_macro("DIGITS")
#pragma pop_macro("EMPTY_BYTES")
#pragma pop_macro("HEX_FORMAT")
#pragma pop_macro("LOWERCASE_DIGITS")
#pragma pop_macro("UPPERCASE_DIGITS")

#endif // _java_util_HexFormat_h_