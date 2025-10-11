#ifndef _q_U_h_
#define _q_U_h_
//$ interface q.U
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("U")
#undef U

namespace q {

class $export U : public ::java::lang::Object {
	$interface(U, $NO_CLASS_INIT, ::java::lang::Object)
};

} // q

#pragma pop_macro("U")

#endif // _q_U_h_