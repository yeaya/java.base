#ifndef _Truncate$2_h_
#define _Truncate$2_h_
//$ class Truncate$2
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace nio {
		class MappedByteBuffer;
	}
}

class Truncate$2 : public ::java::util::concurrent::Callable {
	$class(Truncate$2, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Truncate$2();
	void init$(::java::nio::MappedByteBuffer* val$mbb);
	virtual $Object* call() override;
	::java::nio::MappedByteBuffer* val$mbb = nullptr;
};

#endif // _Truncate$2_h_