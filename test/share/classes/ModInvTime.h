#ifndef _ModInvTime_h_
#define _ModInvTime_h_
//$ class ModInvTime
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

class $export ModInvTime : public ::java::lang::Object {
	$class(ModInvTime, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModInvTime();
	void init$();
	static void check(::java::math::BigInteger* val, ::java::math::BigInteger* mod, ::java::math::BigInteger* inv);
	static void main($StringArray* args);
};

#endif // _ModInvTime_h_