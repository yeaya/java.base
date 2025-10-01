#ifndef _DieBeforeComplete$1_h_
#define _DieBeforeComplete$1_h_
//$ class DieBeforeComplete$1
//$ extends DieBeforeComplete$Task

#include <DieBeforeComplete$Task.h>

namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousServerSocketChannel;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Future;
		}
	}
}

class DieBeforeComplete$1 : public ::DieBeforeComplete$Task {
	$class(DieBeforeComplete$1, $NO_CLASS_INIT, ::DieBeforeComplete$Task)
public:
	DieBeforeComplete$1();
	void init$(::java::nio::channels::AsynchronousServerSocketChannel* val$listener);
	virtual ::java::util::concurrent::Future* run() override;
	::java::nio::channels::AsynchronousServerSocketChannel* val$listener = nullptr;
};

#endif // _DieBeforeComplete$1_h_