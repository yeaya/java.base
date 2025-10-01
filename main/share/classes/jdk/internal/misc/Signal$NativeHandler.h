#ifndef _jdk_internal_misc_Signal$NativeHandler_h_
#define _jdk_internal_misc_Signal$NativeHandler_h_
//$ class jdk.internal.misc.Signal$NativeHandler
//$ extends jdk.internal.misc.Signal$Handler

#include <jdk/internal/misc/Signal$Handler.h>

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

class $export Signal$NativeHandler : public ::jdk::internal::misc::Signal$Handler {
	$class(Signal$NativeHandler, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::misc::Signal$Handler)
public:
	Signal$NativeHandler();
	void init$(int64_t handler);
	int64_t getHandler();
	virtual void handle(::jdk::internal::misc::Signal* sig) override;
	virtual $String* toString() override;
	int64_t handler = 0;
};

		} // misc
	} // internal
} // jdk

#endif // _jdk_internal_misc_Signal$NativeHandler_h_