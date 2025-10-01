#ifndef _MyThreadFactory_h_
#define _MyThreadFactory_h_
//$ class MyThreadFactory
//$ extends java.util.concurrent.ThreadFactory

#include <java/util/concurrent/ThreadFactory.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

class $export MyThreadFactory : public ::java::util::concurrent::ThreadFactory {
	$class(MyThreadFactory, 0, ::java::util::concurrent::ThreadFactory)
public:
	MyThreadFactory();
	void init$();
	static bool created($Thread* t);
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
	static ::java::util::Set* threads;
};

#endif // _MyThreadFactory_h_