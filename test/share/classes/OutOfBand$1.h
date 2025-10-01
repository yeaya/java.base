#ifndef _OutOfBand$1_h_
#define _OutOfBand$1_h_
//$ class OutOfBand$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
		}
	}
}

class OutOfBand$1 : public ::java::lang::Runnable {
	$class(OutOfBand$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	OutOfBand$1();
	void init$(::java::nio::channels::SocketChannel* val$client);
	virtual void run() override;
	::java::nio::channels::SocketChannel* val$client = nullptr;
};

#endif // _OutOfBand$1_h_