#ifndef _java_util_FormattableFlags_h_
#define _java_util_FormattableFlags_h_
//$ class java.util.FormattableFlags
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ALTERNATE")
#undef ALTERNATE
#pragma push_macro("LEFT_JUSTIFY")
#undef LEFT_JUSTIFY
#pragma push_macro("UPPERCASE")
#undef UPPERCASE

namespace java {
	namespace util {

class $import FormattableFlags : public ::java::lang::Object {
	$class(FormattableFlags, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FormattableFlags();
	void init$();
	static const int32_t LEFT_JUSTIFY = 1; // 1 << 0
	static const int32_t UPPERCASE = 2; // 1 << 1
	static const int32_t ALTERNATE = 4; // 1 << 2
};

	} // util
} // java

#pragma pop_macro("ALTERNATE")
#pragma pop_macro("LEFT_JUSTIFY")
#pragma pop_macro("UPPERCASE")

#endif // _java_util_FormattableFlags_h_