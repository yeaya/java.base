#ifndef _p2_internal_X_h_
#define _p2_internal_X_h_
//$ class p2.internal.X
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("X")
#undef X

namespace p2 {
	namespace internal {

class $export X : public ::java::lang::Object {
	$class(X, $NO_CLASS_INIT, ::java::lang::Object)
public:
	X();
	void init$();
};

	} // internal
} // p2

#pragma pop_macro("X")

#endif // _p2_internal_X_h_