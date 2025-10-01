#ifndef _Destroy$1_h_
#define _Destroy$1_h_
//$ class Destroy$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace lang {
		class ThreadGroup;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}

class Destroy$1 : public ::java::lang::Thread {
	$class(Destroy$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	Destroy$1();
	void init$($String* arg0, ::java::util::concurrent::atomic::AtomicInteger* val$nbr, ::java::lang::ThreadGroup* val$root);
	virtual void run() override;
	::java::lang::ThreadGroup* val$root = nullptr;
	::java::util::concurrent::atomic::AtomicInteger* val$nbr = nullptr;
};

#endif // _Destroy$1_h_