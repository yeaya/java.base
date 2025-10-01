#ifndef _CloseWhenKeyIdle$Waker_h_
#define _CloseWhenKeyIdle$Waker_h_
//$ class CloseWhenKeyIdle$Waker
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace nio {
		namespace channels {
			class Selector;
		}
	}
}

class $export CloseWhenKeyIdle$Waker : public ::java::lang::Runnable {
	$class(CloseWhenKeyIdle$Waker, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CloseWhenKeyIdle$Waker();
	void init$(::java::nio::channels::Selector* sel, int64_t delay);
	virtual void run() override;
	::java::nio::channels::Selector* sel = nullptr;
	int64_t delay = 0;
};

#endif // _CloseWhenKeyIdle$Waker_h_