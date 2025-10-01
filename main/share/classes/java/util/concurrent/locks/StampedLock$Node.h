#ifndef _java_util_concurrent_locks_StampedLock$Node_h_
#define _java_util_concurrent_locks_StampedLock$Node_h_
//$ class java.util.concurrent.locks.StampedLock$Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("STATUS")
#undef STATUS
#pragma push_macro("PREV")
#undef PREV
#pragma push_macro("NEXT")
#undef NEXT

namespace java {
	namespace lang {
		class Thread;
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

class $export StampedLock$Node : public ::java::lang::Object {
	$class(StampedLock$Node, 0, ::java::lang::Object)
public:
	StampedLock$Node();
	void init$();
	bool casNext(::java::util::concurrent::locks::StampedLock$Node* c, ::java::util::concurrent::locks::StampedLock$Node* v);
	bool casPrev(::java::util::concurrent::locks::StampedLock$Node* c, ::java::util::concurrent::locks::StampedLock$Node* v);
	void clearStatus();
	int32_t getAndUnsetStatus(int32_t v);
	void setPrevRelaxed(::java::util::concurrent::locks::StampedLock$Node* p);
	void setStatusRelaxed(int32_t s);
	$volatile(::java::util::concurrent::locks::StampedLock$Node*) prev = nullptr;
	$volatile(::java::util::concurrent::locks::StampedLock$Node*) next = nullptr;
	$Thread* waiter = nullptr;
	$volatile(int32_t) status = 0;
	static int64_t STATUS;
	static int64_t NEXT;
	static int64_t PREV;
};

			} // locks
		} // concurrent
	} // util
} // java

#pragma pop_macro("STATUS")
#pragma pop_macro("PREV")
#pragma pop_macro("NEXT")

#endif // _java_util_concurrent_locks_StampedLock$Node_h_