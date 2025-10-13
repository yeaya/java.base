#ifndef _java_net_IDN_h_
#define _java_net_IDN_h_
//$ class java.net.IDN
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ACE_PREFIX")
#undef ACE_PREFIX
#pragma push_macro("ACE_PREFIX_LENGTH")
#undef ACE_PREFIX_LENGTH
#pragma push_macro("ALLOW_UNASSIGNED")
#undef ALLOW_UNASSIGNED
#pragma push_macro("IDN")
#undef IDN
#pragma push_macro("MAX_LABEL_LENGTH")
#undef MAX_LABEL_LENGTH
#pragma push_macro("USE_STD3_ASCII_RULES")
#undef USE_STD3_ASCII_RULES

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {
				class StringPrep;
			}
		}
	}
}

namespace java {
	namespace net {

class $export IDN : public ::java::lang::Object {
	$class(IDN, 0, ::java::lang::Object)
public:
	IDN();
	void init$();
	static bool isAllASCII($String* input);
	static bool isLabelSeparator(char16_t c);
	static bool isNonLDHAsciiCodePoint(int32_t ch);
	static bool isRootLabel($String* s);
	static int32_t searchDots($String* s, int32_t start);
	static bool startsWithACEPrefix(::java::lang::StringBuffer* input);
	static $String* toASCII($String* input, int32_t flag);
	static $String* toASCII($String* input);
	static $String* toASCIIInternal($String* label, int32_t flag);
	static char16_t toASCIILower(char16_t ch);
	static ::java::lang::StringBuffer* toASCIILower(::java::lang::StringBuffer* input);
	static $String* toUnicode($String* input, int32_t flag);
	static $String* toUnicode($String* input);
	static $String* toUnicodeInternal($String* label, int32_t flag);
	static bool $assertionsDisabled;
	static const int32_t ALLOW_UNASSIGNED = 1;
	static const int32_t USE_STD3_ASCII_RULES = 2;
	static $String* ACE_PREFIX;
	static int32_t ACE_PREFIX_LENGTH;
	static const int32_t MAX_LABEL_LENGTH = 63;
	static ::jdk::internal::icu::text::StringPrep* namePrep;
};

	} // net
} // java

#pragma pop_macro("ACE_PREFIX")
#pragma pop_macro("ACE_PREFIX_LENGTH")
#pragma pop_macro("ALLOW_UNASSIGNED")
#pragma pop_macro("IDN")
#pragma pop_macro("MAX_LABEL_LENGTH")
#pragma pop_macro("USE_STD3_ASCII_RULES")

#endif // _java_net_IDN_h_