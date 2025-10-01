#ifndef _WakeupAfterClose$1_h_
#define _WakeupAfterClose$1_h_
//$ class WakeupAfterClose$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace nio {
		namespace channels {
			class Selector;
		}
	}
}

class WakeupAfterClose$1 : public ::java::lang::Runnable {
	$class(WakeupAfterClose$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WakeupAfterClose$1();
	void init$(::java::nio::channels::Selector* val$sel);
	virtual void run() override;
	::java::nio::channels::Selector* val$sel = nullptr;
};

#endif // _WakeupAfterClose$1_h_