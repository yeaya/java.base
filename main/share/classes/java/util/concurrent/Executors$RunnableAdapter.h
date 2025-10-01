#ifndef _java_util_concurrent_Executors$RunnableAdapter_h_
#define _java_util_concurrent_Executors$RunnableAdapter_h_
//$ class java.util.concurrent.Executors$RunnableAdapter
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class Executors$RunnableAdapter : public ::java::util::concurrent::Callable {
	$class(Executors$RunnableAdapter, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Executors$RunnableAdapter();
	void init$(::java::lang::Runnable* task, Object$* result);
	virtual $Object* call() override;
	virtual $String* toString() override;
	::java::lang::Runnable* task = nullptr;
	$Object* result = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executors$RunnableAdapter_h_