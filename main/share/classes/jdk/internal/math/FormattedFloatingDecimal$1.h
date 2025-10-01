#ifndef _jdk_internal_math_FormattedFloatingDecimal$1_h_
#define _jdk_internal_math_FormattedFloatingDecimal$1_h_
//$ class jdk.internal.math.FormattedFloatingDecimal$1
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

namespace jdk {
	namespace internal {
		namespace math {

class $export FormattedFloatingDecimal$1 : public ::java::lang::ThreadLocal {
	$class(FormattedFloatingDecimal$1, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	FormattedFloatingDecimal$1();
	void init$();
	virtual $Object* initialValue() override;
};

		} // math
	} // internal
} // jdk

#endif // _jdk_internal_math_FormattedFloatingDecimal$1_h_