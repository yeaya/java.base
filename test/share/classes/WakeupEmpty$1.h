#ifndef _WakeupEmpty$1_h_
#define _WakeupEmpty$1_h_
//$ class WakeupEmpty$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace nio {
		namespace channels {
			class Selector;
		}
	}
}

class WakeupEmpty$1 : public ::java::lang::Thread {
	$class(WakeupEmpty$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	WakeupEmpty$1();
	void init$(::java::nio::channels::Selector* val$sel);
	virtual void run() override;
	::java::nio::channels::Selector* val$sel = nullptr;
};

#endif // _WakeupEmpty$1_h_