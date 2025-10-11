#ifndef _jdk_internal_reflect_UTF8_h_
#define _jdk_internal_reflect_UTF8_h_
//$ class jdk.internal.reflect.UTF8
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("UTF8")
#undef UTF8

namespace jdk {
	namespace internal {
		namespace reflect {

class UTF8 : public ::java::lang::Object {
	$class(UTF8, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UTF8();
	void init$();
	static $bytes* encode($String* str);
	static int32_t utf8Length($String* str);
};

		} // reflect
	} // internal
} // jdk

#pragma pop_macro("UTF8")

#endif // _jdk_internal_reflect_UTF8_h_