#ifndef _NotBound$1_h_
#define _NotBound$1_h_
//$ class NotBound$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace nio {
		namespace channels {
			class DatagramChannel;
		}
	}
}

class NotBound$1 : public ::java::lang::Runnable {
	$class(NotBound$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	NotBound$1();
	void init$(::java::nio::channels::DatagramChannel* val$dc);
	virtual void run() override;
	::java::nio::channels::DatagramChannel* val$dc = nullptr;
};

#endif // _NotBound$1_h_