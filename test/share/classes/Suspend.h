#ifndef _Suspend_h_
#define _Suspend_h_
//$ class Suspend
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Thread;
		class ThreadGroup;
	}
}

class $export Suspend : public ::java::lang::Runnable {
	$class(Suspend, 0, ::java::lang::Runnable)
public:
	Suspend();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	static $volatile(int32_t) count;
	static ::java::lang::ThreadGroup* group;
	static $Thread* first;
	static $Thread* second;
};

#endif // _Suspend_h_