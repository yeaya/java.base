#ifndef _EarlyTimeout_h_
#define _EarlyTimeout_h_
//$ class EarlyTimeout
//$ extends java.lang.Thread

#include <java/lang/Array.h>
#include <java/lang/Thread.h>

#pragma push_macro("THREADS_COUNT")
#undef THREADS_COUNT
#pragma push_macro("TIMEOUT")
#undef TIMEOUT

namespace java {
	namespace lang {
		namespace ref {
			class Reference;
			class ReferenceQueue;
			class WeakReference;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class $export EarlyTimeout : public ::java::lang::Thread {
	$class(EarlyTimeout, 0, ::java::lang::Thread)
public:
	EarlyTimeout();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	static const int32_t THREADS_COUNT = 2;
	static const int32_t TIMEOUT = 1000;
	static $Object* referent;
	static ::java::lang::ref::ReferenceQueue* queue;
	static ::java::lang::ref::WeakReference* weakReference;
	static ::java::util::concurrent::CountDownLatch* startedSignal;
	int64_t actual = 0;
	::java::lang::ref::Reference* reference = nullptr;
};

#pragma pop_macro("THREADS_COUNT")
#pragma pop_macro("TIMEOUT")

#endif // _EarlyTimeout_h_