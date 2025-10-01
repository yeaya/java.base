#ifndef _MultiThreadStackWalk$WalkThread_h_
#define _MultiThreadStackWalk$WalkThread_h_
//$ class MultiThreadStackWalk$WalkThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class MultiThreadStackWalk$Test;
namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicLong;
			}
		}
	}
}

class $export MultiThreadStackWalk$WalkThread : public ::java::lang::Thread {
	$class(MultiThreadStackWalk$WalkThread, 0, ::java::lang::Thread)
public:
	MultiThreadStackWalk$WalkThread();
	void init$(::MultiThreadStackWalk$Test* test);
	virtual void run() override;
	static ::java::util::concurrent::atomic::AtomicLong* walkersCount;
	$Throwable* failed = nullptr;
	::MultiThreadStackWalk$Test* test = nullptr;
};

#endif // _MultiThreadStackWalk$WalkThread_h_