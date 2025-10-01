#ifndef _RegAfterPreClose$1_h_
#define _RegAfterPreClose$1_h_
//$ class RegAfterPreClose$1
//$ extends java.util.concurrent.ThreadFactory

#include <java/util/concurrent/ThreadFactory.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}

class RegAfterPreClose$1 : public ::java::util::concurrent::ThreadFactory {
	$class(RegAfterPreClose$1, $NO_CLASS_INIT, ::java::util::concurrent::ThreadFactory)
public:
	RegAfterPreClose$1();
	void init$();
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
};

#endif // _RegAfterPreClose$1_h_