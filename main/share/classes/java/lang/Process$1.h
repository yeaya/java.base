#ifndef _java_lang_Process$1_h_
#define _java_lang_Process$1_h_
//$ class java.lang.Process$1
//$ extends java.util.concurrent.ForkJoinPool$ManagedBlocker

#include <java/util/concurrent/ForkJoinPool$ManagedBlocker.h>

namespace java {
	namespace lang {
		class Process;
	}
}

namespace java {
	namespace lang {

class Process$1 : public ::java::util::concurrent::ForkJoinPool$ManagedBlocker {
	$class(Process$1, $NO_CLASS_INIT, ::java::util::concurrent::ForkJoinPool$ManagedBlocker)
public:
	Process$1();
	void init$(::java::lang::Process* this$0);
	virtual bool block() override;
	virtual bool isReleasable() override;
	::java::lang::Process* this$0 = nullptr;
};

	} // lang
} // java

#endif // _java_lang_Process$1_h_