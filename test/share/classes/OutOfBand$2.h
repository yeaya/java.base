#ifndef _OutOfBand$2_h_
#define _OutOfBand$2_h_
//$ class OutOfBand$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
		}
	}
}

class OutOfBand$2 : public ::java::lang::Runnable {
	$class(OutOfBand$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	OutOfBand$2();
	void init$(::java::nio::channels::SocketChannel* val$server, int32_t val$STOP);
	virtual void run() override;
	int32_t val$STOP = 0;
	::java::nio::channels::SocketChannel* val$server = nullptr;
};

#endif // _OutOfBand$2_h_