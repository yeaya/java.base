#ifndef _java_util_concurrent_DelayQueue_h_
#define _java_util_concurrent_DelayQueue_h_
//$ class java.util.concurrent.DelayQueue
//$ extends java.util.AbstractQueue
//$ implements java.util.concurrent.BlockingQueue

#include <java/lang/Array.h>
#include <java/util/AbstractQueue.h>
#include <java/util/concurrent/BlockingQueue.h>

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class PriorityQueue;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Delayed;
			class TimeUnit;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Condition;
				class ReentrantLock;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import DelayQueue : public ::java::util::AbstractQueue, public ::java::util::concurrent::BlockingQueue {
	$class(DelayQueue, $NO_CLASS_INIT, ::java::util::AbstractQueue, ::java::util::concurrent::BlockingQueue)
public:
	DelayQueue();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool addAll(::java::util::Collection* c) override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual $Object* element() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::util::Collection* c);
	virtual bool add(::java::util::concurrent::Delayed* e);
	virtual bool add(Object$* e) override;
	virtual void clear() override;
	virtual int32_t drainTo(::java::util::Collection* c) override;
	virtual int32_t drainTo(::java::util::Collection* c, int32_t maxElements) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool offer(::java::util::concurrent::Delayed* e);
	virtual bool offer(::java::util::concurrent::Delayed* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit);
	virtual bool offer(Object$* e) override;
	virtual bool offer(Object$* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual $Object* peek() override;
	virtual $Object* poll() override;
	virtual $Object* poll(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual void put(::java::util::concurrent::Delayed* e);
	virtual void put(Object$* e) override;
	virtual int32_t remainingCapacity() override;
	virtual $Object* remove() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual void removeEQ(Object$* o);
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual $Object* take() override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	::java::util::concurrent::locks::ReentrantLock* lock = nullptr;
	::java::util::PriorityQueue* q = nullptr;
	$Thread* leader = nullptr;
	::java::util::concurrent::locks::Condition* available = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_DelayQueue_h_