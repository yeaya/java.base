#ifndef _jdk_internal_misc_Signal$1_h_
#define _jdk_internal_misc_Signal$1_h_
//$ class jdk.internal.misc.Signal$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace jdk {
	namespace internal {
		namespace misc {
			class Signal;
			class Signal$Handler;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace misc {

class Signal$1 : public ::java::lang::Runnable {
	$class(Signal$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Signal$1();
	void init$(::jdk::internal::misc::Signal$Handler* val$handler, ::jdk::internal::misc::Signal* val$sig);
	virtual void run() override;
	::jdk::internal::misc::Signal* val$sig = nullptr;
	::jdk::internal::misc::Signal$Handler* val$handler = nullptr;
};

		} // misc
	} // internal
} // jdk

#endif // _jdk_internal_misc_Signal$1_h_