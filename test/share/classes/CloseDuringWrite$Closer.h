#ifndef _CloseDuringWrite$Closer_h_
#define _CloseDuringWrite$Closer_h_
//$ class CloseDuringWrite$Closer
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace io {
		class Closeable;
	}
}

class $export CloseDuringWrite$Closer : public ::java::util::concurrent::Callable {
	$class(CloseDuringWrite$Closer, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CloseDuringWrite$Closer();
	void init$(::java::io::Closeable* c);
	virtual $Object* call() override;
	::java::io::Closeable* c = nullptr;
};

#endif // _CloseDuringWrite$Closer_h_