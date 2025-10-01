#ifndef _jdk_internal_misc_Signal$Handler_h_
#define _jdk_internal_misc_Signal$Handler_h_
//$ interface jdk.internal.misc.Signal$Handler
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SIG_DFL")
#undef SIG_DFL
#pragma push_macro("SIG_IGN")
#undef SIG_IGN

namespace jdk {
	namespace internal {
		namespace misc {
			class Signal;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace misc {

class $import Signal$Handler : public ::java::lang::Object {
	$interface(Signal$Handler, $PRELOAD, ::java::lang::Object)
public:
	virtual void handle(::jdk::internal::misc::Signal* sig) {}
	static ::jdk::internal::misc::Signal$Handler* SIG_DFL;
	static ::jdk::internal::misc::Signal$Handler* SIG_IGN;
};

		} // misc
	} // internal
} // jdk

#pragma pop_macro("SIG_DFL")
#pragma pop_macro("SIG_IGN")

#endif // _jdk_internal_misc_Signal$Handler_h_