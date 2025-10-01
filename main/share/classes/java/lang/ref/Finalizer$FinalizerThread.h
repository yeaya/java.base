#ifndef _java_lang_ref_Finalizer$FinalizerThread_h_
#define _java_lang_ref_Finalizer$FinalizerThread_h_
//$ class java.lang.ref.Finalizer$FinalizerThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace lang {
		class ThreadGroup;
	}
}

namespace java {
	namespace lang {
		namespace ref {

class Finalizer$FinalizerThread : public ::java::lang::Thread {
	$class(Finalizer$FinalizerThread, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Thread)
public:
	Finalizer$FinalizerThread();
	void init$(::java::lang::ThreadGroup* g);
	virtual void run() override;
	$volatile(bool) running = false;
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_Finalizer$FinalizerThread_h_