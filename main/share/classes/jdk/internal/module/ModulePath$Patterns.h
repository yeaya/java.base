#ifndef _jdk_internal_module_ModulePath$Patterns_h_
#define _jdk_internal_module_ModulePath$Patterns_h_
//$ class jdk.internal.module.ModulePath$Patterns
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LEADING_DOTS")
#undef LEADING_DOTS
#pragma push_macro("NON_ALPHANUM")
#undef NON_ALPHANUM
#pragma push_macro("TRAILING_DOTS")
#undef TRAILING_DOTS
#pragma push_macro("DASH_VERSION")
#undef DASH_VERSION
#pragma push_macro("REPEATING_DOTS")
#undef REPEATING_DOTS

namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class ModulePath$Patterns : public ::java::lang::Object {
	$class(ModulePath$Patterns, 0, ::java::lang::Object)
public:
	ModulePath$Patterns();
	void init$();
	static ::java::util::regex::Pattern* DASH_VERSION;
	static ::java::util::regex::Pattern* NON_ALPHANUM;
	static ::java::util::regex::Pattern* REPEATING_DOTS;
	static ::java::util::regex::Pattern* LEADING_DOTS;
	static ::java::util::regex::Pattern* TRAILING_DOTS;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("LEADING_DOTS")
#pragma pop_macro("NON_ALPHANUM")
#pragma pop_macro("TRAILING_DOTS")
#pragma pop_macro("DASH_VERSION")
#pragma pop_macro("REPEATING_DOTS")

#endif // _jdk_internal_module_ModulePath$Patterns_h_