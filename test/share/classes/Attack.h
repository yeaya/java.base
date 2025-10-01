#ifndef _Attack_h_
#define _Attack_h_
//$ class Attack
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class $export Attack : public ::java::lang::Runnable {
	$class(Attack, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Attack();
	void init$();
	virtual void Attack$();
	virtual bool failedDueToSecurityException();
	virtual void run() override;
	virtual void waitUntilDone();
	::java::util::concurrent::CountDownLatch* latch = nullptr;
	$volatile(bool) failedDueToSecurityException$ = false;
};

#endif // _Attack_h_