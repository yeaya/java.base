#ifndef _jdk_internal_icu_impl_Utility_h_
#define _jdk_internal_icu_impl_Utility_h_
//$ class jdk.internal.icu.impl.Utility
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DIGITS")
#undef DIGITS
#pragma push_macro("UNESCAPE_MAP")
#undef UNESCAPE_MAP

namespace java {
	namespace lang {
		class Appendable;
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class Utility : public ::java::lang::Object {
	$class(Utility, 0, ::java::lang::Object)
public:
	Utility();
	void init$();
	static $String* escape($String* s);
	static bool escapeUnprintable(::java::lang::Appendable* result, int32_t c);
	static $String* hex(int64_t i, int32_t places);
	static bool isUnprintable(int32_t c);
	static int32_t unescapeAt($String* s, $ints* offset16);
	static $chars* UNESCAPE_MAP;
	static $chars* DIGITS;
};

			} // impl
		} // icu
	} // internal
} // jdk

#pragma pop_macro("DIGITS")
#pragma pop_macro("UNESCAPE_MAP")

#endif // _jdk_internal_icu_impl_Utility_h_