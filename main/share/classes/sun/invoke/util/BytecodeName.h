#ifndef _sun_invoke_util_BytecodeName_h_
#define _sun_invoke_util_BytecodeName_h_
//$ class sun.invoke.util.BytecodeName
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ESCAPE_C")
#undef ESCAPE_C
#pragma push_macro("DANGEROUS_CHARS")
#undef DANGEROUS_CHARS
#pragma push_macro("DANGEROUS_CHARS_A")
#undef DANGEROUS_CHARS_A
#pragma push_macro("NULL_ESCAPE")
#undef NULL_ESCAPE
#pragma push_macro("DANGEROUS_CHAR_FIRST_INDEX")
#undef DANGEROUS_CHAR_FIRST_INDEX
#pragma push_macro("REPLACEMENT_CHARS")
#undef REPLACEMENT_CHARS
#pragma push_macro("SPECIAL_BITMAP")
#undef SPECIAL_BITMAP
#pragma push_macro("NULL_ESCAPE_C")
#undef NULL_ESCAPE_C
#pragma push_macro("REPLACEMENT_CHARS_A")
#undef REPLACEMENT_CHARS_A
#pragma push_macro("DANGEROUS_CHARS_CA")
#undef DANGEROUS_CHARS_CA

namespace java {
	namespace lang {
		class Character;
	}
}

namespace sun {
	namespace invoke {
		namespace util {

class $export BytecodeName : public ::java::lang::Object {
	$class(BytecodeName, 0, ::java::lang::Object)
public:
	BytecodeName();
	void init$();
	static $String* appendAll($ObjectArray* components);
	static void checkSafeBytecodeName($String* s);
	static $String* demangle($String* s);
	static int32_t indexOfDangerousChar($String* s, int32_t from);
	static bool isDangerous(char16_t c);
	static bool isJavaIdent($String* s);
	static bool isSafeBytecodeChar(char16_t c);
	static bool isSafeBytecodeName($String* s);
	static bool isSpecial(char16_t c);
	static int32_t lastIndexOfDangerousChar($String* s, int32_t from);
	static bool looksMangled($String* s);
	static $String* mangle($String* s);
	static char16_t originalOfReplacement(char16_t c);
	static $ObjectArray* parseBytecodeName($String* s);
	static $String* quoteDisplay($String* s);
	static char16_t replacementOf(char16_t c);
	static $String* toBytecodeName($String* s);
	static $String* toDisplayName($String* s);
	static $String* toSourceName($String* s);
	static $String* unparseBytecodeName($ObjectArray* components);
	static bool $assertionsDisabled;
	static char16_t ESCAPE_C;
	static char16_t NULL_ESCAPE_C;
	static $String* NULL_ESCAPE;
	static $String* DANGEROUS_CHARS;
	static $String* REPLACEMENT_CHARS;
	static const int32_t DANGEROUS_CHAR_FIRST_INDEX = 1;
	static $chars* DANGEROUS_CHARS_A;
	static $chars* REPLACEMENT_CHARS_A;
	static $Array<::java::lang::Character>* DANGEROUS_CHARS_CA;
	static $longs* SPECIAL_BITMAP;
};

		} // util
	} // invoke
} // sun

#pragma pop_macro("ESCAPE_C")
#pragma pop_macro("DANGEROUS_CHARS")
#pragma pop_macro("DANGEROUS_CHARS_A")
#pragma pop_macro("NULL_ESCAPE")
#pragma pop_macro("DANGEROUS_CHAR_FIRST_INDEX")
#pragma pop_macro("REPLACEMENT_CHARS")
#pragma pop_macro("SPECIAL_BITMAP")
#pragma pop_macro("NULL_ESCAPE_C")
#pragma pop_macro("REPLACEMENT_CHARS_A")
#pragma pop_macro("DANGEROUS_CHARS_CA")

#endif // _sun_invoke_util_BytecodeName_h_