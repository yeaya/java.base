#ifndef _TestSynchronization$InvokeTask_h_
#define _TestSynchronization$InvokeTask_h_
//$ class TestSynchronization$InvokeTask
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

class $export TestSynchronization$InvokeTask : public ::java::lang::Runnable {
	$class(TestSynchronization$InvokeTask, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	TestSynchronization$InvokeTask();
	void init$(::java::lang::reflect::Method* m, Object$* target, $ObjectArray* args);
	virtual void run() override;
	::java::lang::reflect::Method* m = nullptr;
	$Object* target = nullptr;
	$ObjectArray* args = nullptr;
};

#endif // _TestSynchronization$InvokeTask_h_