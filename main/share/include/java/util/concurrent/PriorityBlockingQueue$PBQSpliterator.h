#ifndef _java_util_concurrent_PriorityBlockingQueue$PBQSpliterator_h_
#define _java_util_concurrent_PriorityBlockingQueue$PBQSpliterator_h_
//$ class java.util.concurrent.PriorityBlockingQueue$PBQSpliterator
//$ extends java.util.Spliterator

#include <java/lang/Array.h>
#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		namespace concurrent {
			class PriorityBlockingQueue;
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

class $import PriorityBlockingQueue$PBQSpliterator : public ::java::util::Spliterator {
	$class(PriorityBlockingQueue$PBQSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	PriorityBlockingQueue$PBQSpliterator();
	void init$(::java::util::concurrent::PriorityBlockingQueue* this$0);
	void init$(::java::util::concurrent::PriorityBlockingQueue* this$0, $ObjectArray* array, int32_t index, int32_t fence);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	int32_t getFence();
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::concurrent::PriorityBlockingQueue$PBQSpliterator* trySplit() override;
	::java::util::concurrent::PriorityBlockingQueue* this$0 = nullptr;
	$ObjectArray* array = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_PriorityBlockingQueue$PBQSpliterator_h_