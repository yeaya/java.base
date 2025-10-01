#ifndef _java_util_concurrent_CyclicBarrier_h_
#define _java_util_concurrent_CyclicBarrier_h_
//$ class java.util.concurrent.CyclicBarrier
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CyclicBarrier$Generation;
			class TimeUnit;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Condition;
				class ReentrantLock;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import CyclicBarrier : public ::java::lang::Object {
	$class(CyclicBarrier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CyclicBarrier();
	void init$(int32_t parties, ::java::lang::Runnable* barrierAction);
	void init$(int32_t parties);
	virtual int32_t await();
	virtual int32_t await(int64_t timeout, ::java::util::concurrent::TimeUnit* unit);
	void breakBarrier();
	int32_t dowait(bool timed, int64_t nanos);
	virtual int32_t getNumberWaiting();
	virtual int32_t getParties();
	virtual bool isBroken();
	void nextGeneration();
	virtual void reset();
	::java::util::concurrent::locks::ReentrantLock* lock = nullptr;
	::java::util::concurrent::locks::Condition* trip = nullptr;
	int32_t parties = 0;
	::java::lang::Runnable* barrierCommand = nullptr;
	::java::util::concurrent::CyclicBarrier$Generation* generation = nullptr;
	int32_t count = 0;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CyclicBarrier_h_