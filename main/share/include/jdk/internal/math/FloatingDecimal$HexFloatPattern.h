#ifndef _jdk_internal_math_FloatingDecimal$HexFloatPattern_h_
#define _jdk_internal_math_FloatingDecimal$HexFloatPattern_h_
//$ class jdk.internal.math.FloatingDecimal$HexFloatPattern
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("VALUE")
#undef VALUE

namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace math {

class $import FloatingDecimal$HexFloatPattern : public ::java::lang::Object {
	$class(FloatingDecimal$HexFloatPattern, 0, ::java::lang::Object)
public:
	FloatingDecimal$HexFloatPattern();
	void init$();
	static ::java::util::regex::Pattern* VALUE;
};

		} // math
	} // internal
} // jdk

#pragma pop_macro("VALUE")

#endif // _jdk_internal_math_FloatingDecimal$HexFloatPattern_h_