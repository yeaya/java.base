#ifndef _java_util_concurrent_ArrayBlockingQueue$Itr_h_
#define _java_util_concurrent_ArrayBlockingQueue$Itr_h_
//$ class java.util.concurrent.ArrayBlockingQueue$Itr
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

#pragma push_macro("DETACHED")
#undef DETACHED
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("REMOVED")
#undef REMOVED

namespace java {
	namespace util {
		namespace concurrent {
			class ArrayBlockingQueue;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class ArrayBlockingQueue$Itr : public ::java::util::Iterator {
	$class(ArrayBlockingQueue$Itr, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ArrayBlockingQueue$Itr();
	void init$(::java::util::concurrent::ArrayBlockingQueue* this$0);
	void detach();
	int32_t distance(int32_t index, int32_t prevTakeIndex, int32_t length);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	int32_t incCursor(int32_t index);
	void incorporateDequeues();
	bool invalidated(int32_t index, int32_t prevTakeIndex, int64_t dequeues, int32_t length);
	virtual bool isDetached();
	virtual $Object* next() override;
	void noNext();
	virtual void remove() override;
	virtual bool removedAt(int32_t removedIndex);
	virtual void shutdown();
	virtual bool takeIndexWrapped();
	::java::util::concurrent::ArrayBlockingQueue* this$0 = nullptr;
	int32_t cursor = 0;
	$Object* nextItem = nullptr;
	int32_t nextIndex = 0;
	$Object* lastItem = nullptr;
	int32_t lastRet = 0;
	int32_t prevTakeIndex = 0;
	int32_t prevCycles = 0;
	static const int32_t NONE = (-1);
	static const int32_t REMOVED = (-2);
	static const int32_t DETACHED = (-3);
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("DETACHED")
#pragma pop_macro("NONE")
#pragma pop_macro("REMOVED")

#endif // _java_util_concurrent_ArrayBlockingQueue$Itr_h_