#ifndef _java_util_PriorityQueue$PriorityQueueSpliterator_h_
#define _java_util_PriorityQueue$PriorityQueueSpliterator_h_
//$ class java.util.PriorityQueue$PriorityQueueSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		class PriorityQueue;
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

class $import PriorityQueue$PriorityQueueSpliterator : public ::java::util::Spliterator {
	$class(PriorityQueue$PriorityQueueSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	PriorityQueue$PriorityQueueSpliterator();
	void init$(::java::util::PriorityQueue* this$0, int32_t origin, int32_t fence, int32_t expectedModCount);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	int32_t getFence();
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::PriorityQueue$PriorityQueueSpliterator* trySplit() override;
	::java::util::PriorityQueue* this$0 = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_PriorityQueue$PriorityQueueSpliterator_h_