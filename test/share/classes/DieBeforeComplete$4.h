#ifndef _DieBeforeComplete$4_h_
#define _DieBeforeComplete$4_h_
//$ class DieBeforeComplete$4
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class DieBeforeComplete$Task;
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicReference;
			}
		}
	}
}

class DieBeforeComplete$4 : public ::java::lang::Runnable {
	$class(DieBeforeComplete$4, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	DieBeforeComplete$4();
	void init$(::java::util::concurrent::atomic::AtomicReference* val$result, ::DieBeforeComplete$Task* val$task);
	virtual void run() override;
	::DieBeforeComplete$Task* val$task = nullptr;
	::java::util::concurrent::atomic::AtomicReference* val$result = nullptr;
};

#endif // _DieBeforeComplete$4_h_