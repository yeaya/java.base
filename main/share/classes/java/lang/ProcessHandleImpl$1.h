#ifndef _java_lang_ProcessHandleImpl$1_h_
#define _java_lang_ProcessHandleImpl$1_h_
//$ class java.lang.ProcessHandleImpl$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class ProcessHandleImpl$ExitCompletion;
	}
}

namespace java {
	namespace lang {

class ProcessHandleImpl$1 : public ::java::lang::Runnable {
	$class(ProcessHandleImpl$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ProcessHandleImpl$1();
	void init$(int64_t val$pid, bool val$shouldReap, ::java::lang::ProcessHandleImpl$ExitCompletion* val$newCompletion);
	virtual void run() override;
	::java::lang::ProcessHandleImpl$ExitCompletion* val$newCompletion = nullptr;
	bool val$shouldReap = false;
	int64_t val$pid = 0;
};

	} // lang
} // java

#endif // _java_lang_ProcessHandleImpl$1_h_