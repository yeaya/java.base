#ifndef _MultiThreadStackWalk$Env_h_
#define _MultiThreadStackWalk$Env_h_
//$ class MultiThreadStackWalk$Env
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StackWalker$StackFrame;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
				class AtomicLong;
			}
		}
	}
}

class $export MultiThreadStackWalk$Env : public ::java::lang::Object {
	$class(MultiThreadStackWalk$Env, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MultiThreadStackWalk$Env();
	void init$(int64_t total, int64_t markAt, ::java::util::concurrent::atomic::AtomicBoolean* debug);
	void init$(::MultiThreadStackWalk$Env* orig, int64_t start);
	virtual void consume(::java::lang::StackWalker$StackFrame* sfi);
	void lambda$consume$0(::java::lang::StackWalker$StackFrame* x);
	::java::util::concurrent::atomic::AtomicLong* frameCounter = nullptr;
	int64_t checkMarkAt = 0;
	int64_t max = 0;
	::java::util::concurrent::atomic::AtomicBoolean* debug = nullptr;
	::java::util::concurrent::atomic::AtomicLong* markerCalled = nullptr;
	::java::util::concurrent::atomic::AtomicLong* maxReached = nullptr;
	::java::util::Set* unexpected = nullptr;
};

#endif // _MultiThreadStackWalk$Env_h_