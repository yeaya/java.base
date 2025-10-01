#ifndef _java_util_concurrent_PriorityBlockingQueue$Itr_h_
#define _java_util_concurrent_PriorityBlockingQueue$Itr_h_
//$ class java.util.concurrent.PriorityBlockingQueue$Itr
//$ extends java.util.Iterator

#include <java/lang/Array.h>
#include <java/util/Iterator.h>

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

class $import PriorityBlockingQueue$Itr : public ::java::util::Iterator {
	$class(PriorityBlockingQueue$Itr, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	PriorityBlockingQueue$Itr();
	void init$(::java::util::concurrent::PriorityBlockingQueue* this$0, $ObjectArray* array);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::concurrent::PriorityBlockingQueue* this$0 = nullptr;
	$ObjectArray* array = nullptr;
	int32_t cursor = 0;
	int32_t lastRet = 0;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_PriorityBlockingQueue$Itr_h_