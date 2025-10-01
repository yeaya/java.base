#ifndef _jdk_internal_math_FloatingDecimal$1_h_
#define _jdk_internal_math_FloatingDecimal$1_h_
//$ class jdk.internal.math.FloatingDecimal$1
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

namespace jdk {
	namespace internal {
		namespace math {

class $export FloatingDecimal$1 : public ::java::lang::ThreadLocal {
	$class(FloatingDecimal$1, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	FloatingDecimal$1();
	void init$();
	virtual $Object* initialValue() override;
};

		} // math
	} // internal
} // jdk

#endif // _jdk_internal_math_FloatingDecimal$1_h_