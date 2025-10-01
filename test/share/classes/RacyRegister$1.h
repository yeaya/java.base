#ifndef _RacyRegister$1_h_
#define _RacyRegister$1_h_
//$ class RacyRegister$1
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
		}
	}
}

class RacyRegister$1 : public ::java::util::concurrent::Callable {
	$class(RacyRegister$1, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	RacyRegister$1();
	void init$(::java::nio::channels::SocketChannel* val$sc);
	virtual $Object* call() override;
	::java::nio::channels::SocketChannel* val$sc = nullptr;
};

#endif // _RacyRegister$1_h_