#ifndef _ThreadId_h_
#define _ThreadId_h_
//$ class ThreadId
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}

class $export ThreadId : public ::java::lang::Object {
	$class(ThreadId, 0, ::java::lang::Object)
public:
	ThreadId();
	void init$();
	static int32_t get();
	static ::java::util::concurrent::atomic::AtomicInteger* nextId;
	static ::java::lang::ThreadLocal* threadId;
};

#endif // _ThreadId_h_