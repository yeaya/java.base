#ifndef _PrivilegedThreadFactory_h_
#define _PrivilegedThreadFactory_h_
//$ class PrivilegedThreadFactory
//$ extends java.util.concurrent.ThreadFactory

#include <java/util/concurrent/ThreadFactory.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}

class $export PrivilegedThreadFactory : public ::java::util::concurrent::ThreadFactory {
	$class(PrivilegedThreadFactory, $NO_CLASS_INIT, ::java::util::concurrent::ThreadFactory)
public:
	PrivilegedThreadFactory();
	void init$();
	virtual void PrivilegedThreadPoolFactory();
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
};

#endif // _PrivilegedThreadFactory_h_