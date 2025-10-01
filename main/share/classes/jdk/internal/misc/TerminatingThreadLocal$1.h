#ifndef _jdk_internal_misc_TerminatingThreadLocal$1_h_
#define _jdk_internal_misc_TerminatingThreadLocal$1_h_
//$ class jdk.internal.misc.TerminatingThreadLocal$1
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

namespace jdk {
	namespace internal {
		namespace misc {

class TerminatingThreadLocal$1 : public ::java::lang::ThreadLocal {
	$class(TerminatingThreadLocal$1, $PRELOAD | $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	TerminatingThreadLocal$1();
	void init$();
	virtual $Object* initialValue() override;
};

		} // misc
	} // internal
} // jdk

#endif // _jdk_internal_misc_TerminatingThreadLocal$1_h_