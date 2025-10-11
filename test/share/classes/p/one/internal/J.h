#ifndef _p_one_internal_J_h_
#define _p_one_internal_J_h_
//$ interface p.one.internal.J
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("J")
#undef J

namespace p {
	namespace one {
		namespace internal {

class $export J : public ::java::lang::Object {
	$interface(J, $NO_CLASS_INIT, ::java::lang::Object)
};

		} // internal
	} // one
} // p

#pragma pop_macro("J")

#endif // _p_one_internal_J_h_