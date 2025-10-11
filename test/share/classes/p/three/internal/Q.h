#ifndef _p_three_internal_Q_h_
#define _p_three_internal_Q_h_
//$ interface p.three.internal.Q
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("Q")
#undef Q

namespace p {
	namespace three {
		namespace internal {

class $export Q : public ::java::lang::Object {
	$interface(Q, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t m();
};

		} // internal
	} // three
} // p

#pragma pop_macro("Q")

#endif // _p_three_internal_Q_h_