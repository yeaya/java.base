#ifndef _Truncate$1_h_
#define _Truncate$1_h_
//$ class Truncate$1
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace nio {
		class MappedByteBuffer;
	}
}

class Truncate$1 : public ::java::util::concurrent::Callable {
	$class(Truncate$1, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Truncate$1();
	void init$(::java::nio::MappedByteBuffer* val$mbb);
	virtual $Object* call() override;
	::java::nio::MappedByteBuffer* val$mbb = nullptr;
};

#endif // _Truncate$1_h_