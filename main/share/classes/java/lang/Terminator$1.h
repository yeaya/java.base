#ifndef _java_lang_Terminator$1_h_
#define _java_lang_Terminator$1_h_
//$ class java.lang.Terminator$1
//$ extends jdk.internal.misc.Signal$Handler

#include <jdk/internal/misc/Signal$Handler.h>

namespace jdk {
	namespace internal {
		namespace misc {
			class Signal;
		}
	}
}

namespace java {
	namespace lang {

class Terminator$1 : public ::jdk::internal::misc::Signal$Handler {
	$class(Terminator$1, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::misc::Signal$Handler)
public:
	Terminator$1();
	void init$();
	virtual void handle(::jdk::internal::misc::Signal* sig) override;
};

	} // lang
} // java

#endif // _java_lang_Terminator$1_h_