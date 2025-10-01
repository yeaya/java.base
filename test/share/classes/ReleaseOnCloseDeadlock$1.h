#ifndef _ReleaseOnCloseDeadlock$1_h_
#define _ReleaseOnCloseDeadlock$1_h_
//$ class ReleaseOnCloseDeadlock$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace nio {
		namespace channels {
			class Channel;
		}
	}
}

class ReleaseOnCloseDeadlock$1 : public ::java::lang::Runnable {
	$class(ReleaseOnCloseDeadlock$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ReleaseOnCloseDeadlock$1();
	void init$(::java::nio::channels::Channel* val$channel);
	virtual void run() override;
	::java::nio::channels::Channel* val$channel = nullptr;
};

#endif // _ReleaseOnCloseDeadlock$1_h_