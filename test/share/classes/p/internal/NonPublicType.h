#ifndef _p_internal_NonPublicType_h_
#define _p_internal_NonPublicType_h_
//$ class p.internal.NonPublicType
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace p {
	namespace internal {

class NonPublicType : public ::java::lang::Object {
	$class(NonPublicType, 0, ::java::lang::Object)
public:
	NonPublicType();
	void init$();
	static $Object* obj;
};

	} // internal
} // p

#endif // _p_internal_NonPublicType_h_