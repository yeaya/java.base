#ifndef _p_two_internal_C_h_
#define _p_two_internal_C_h_
//$ interface p.two.internal.C
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("C")
#undef C

namespace p {
	namespace two {
		namespace internal {

class $export C : public ::java::lang::Object {
	$interface(C, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t m();
};

		} // internal
	} // two
} // p

#pragma pop_macro("C")

#endif // _p_two_internal_C_h_