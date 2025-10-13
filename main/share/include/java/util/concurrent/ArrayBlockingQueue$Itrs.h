#ifndef _java_util_concurrent_ArrayBlockingQueue$Itrs_h_
#define _java_util_concurrent_ArrayBlockingQueue$Itrs_h_
//$ class java.util.concurrent.ArrayBlockingQueue$Itrs
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LONG_SWEEP_PROBES")
#undef LONG_SWEEP_PROBES
#pragma push_macro("SHORT_SWEEP_PROBES")
#undef SHORT_SWEEP_PROBES

namespace java {
	namespace util {
		namespace concurrent {
			class ArrayBlockingQueue;
			class ArrayBlockingQueue$Itr;
			class ArrayBlockingQueue$Itrs$Node;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ArrayBlockingQueue$Itrs : public ::java::lang::Object {
	$class(ArrayBlockingQueue$Itrs, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ArrayBlockingQueue$Itrs();
	void init$(::java::util::concurrent::ArrayBlockingQueue* this$0, ::java::util::concurrent::ArrayBlockingQueue$Itr* initial);
	virtual void doSomeSweeping(bool tryHarder);
	virtual void elementDequeued();
	virtual void queueIsEmpty();
	virtual void register$(::java::util::concurrent::ArrayBlockingQueue$Itr* itr);
	virtual void removedAt(int32_t removedIndex);
	virtual void takeIndexWrapped();
	::java::util::concurrent::ArrayBlockingQueue* this$0 = nullptr;
	int32_t cycles = 0;
	::java::util::concurrent::ArrayBlockingQueue$Itrs$Node* head = nullptr;
	::java::util::concurrent::ArrayBlockingQueue$Itrs$Node* sweeper = nullptr;
	static const int32_t SHORT_SWEEP_PROBES = 4;
	static const int32_t LONG_SWEEP_PROBES = 16;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("LONG_SWEEP_PROBES")
#pragma pop_macro("SHORT_SWEEP_PROBES")

#endif // _java_util_concurrent_ArrayBlockingQueue$Itrs_h_