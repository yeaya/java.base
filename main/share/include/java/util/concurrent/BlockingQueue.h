#ifndef _java_util_concurrent_BlockingQueue_h_
#define _java_util_concurrent_BlockingQueue_h_
//$ interface java.util.concurrent.BlockingQueue
//$ extends java.util.Queue

#include <java/util/Queue.h>

namespace java {
	namespace util {
		class Collection;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import BlockingQueue : public ::java::util::Queue {
	$interface(BlockingQueue, $NO_CLASS_INIT, ::java::util::Queue)
public:
	virtual bool add(Object$* e) override {return false;}
	virtual bool contains(Object$* o) override {return false;}
	virtual int32_t drainTo(::java::util::Collection* c) {return 0;}
	virtual int32_t drainTo(::java::util::Collection* c, int32_t maxElements) {return 0;}
	virtual bool offer(Object$* e) override {return false;}
	virtual bool offer(Object$* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) {return false;}
	using ::java::util::Queue::poll;
	virtual $Object* poll(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) {return nullptr;}
	virtual void put(Object$* e) {}
	virtual int32_t remainingCapacity() {return 0;}
	using ::java::util::Queue::remove;
	virtual bool remove(Object$* o) override {return false;}
	virtual $Object* take() {return nullptr;}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_BlockingQueue_h_