#ifndef _DieBeforeComplete$2_h_
#define _DieBeforeComplete$2_h_
//$ class DieBeforeComplete$2
//$ extends DieBeforeComplete$Task

#include <DieBeforeComplete$Task.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousSocketChannel;
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

class DieBeforeComplete$2 : public ::DieBeforeComplete$Task {
	$class(DieBeforeComplete$2, $NO_CLASS_INIT, ::DieBeforeComplete$Task)
public:
	DieBeforeComplete$2();
	void init$(::java::nio::channels::AsynchronousSocketChannel* val$channel, ::java::nio::ByteBuffer* val$dst);
	virtual ::java::util::concurrent::Future* run() override;
	::java::nio::ByteBuffer* val$dst = nullptr;
	::java::nio::channels::AsynchronousSocketChannel* val$channel = nullptr;
};

#endif // _DieBeforeComplete$2_h_