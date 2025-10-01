#ifndef _DieBeforeComplete$3_h_
#define _DieBeforeComplete$3_h_
//$ class DieBeforeComplete$3
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

class DieBeforeComplete$3 : public ::DieBeforeComplete$Task {
	$class(DieBeforeComplete$3, $NO_CLASS_INIT, ::DieBeforeComplete$Task)
public:
	DieBeforeComplete$3();
	void init$(::java::nio::channels::AsynchronousSocketChannel* val$channel, ::java::nio::ByteBuffer* val$src);
	virtual ::java::util::concurrent::Future* run() override;
	::java::nio::ByteBuffer* val$src = nullptr;
	::java::nio::channels::AsynchronousSocketChannel* val$channel = nullptr;
};

#endif // _DieBeforeComplete$3_h_