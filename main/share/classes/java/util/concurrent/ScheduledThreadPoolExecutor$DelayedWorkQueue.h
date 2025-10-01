#ifndef _java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_h_
#define _java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_h_
//$ class java.util.concurrent.ScheduledThreadPoolExecutor$DelayedWorkQueue
//$ extends java.util.AbstractQueue
//$ implements java.util.concurrent.BlockingQueue

#include <java/lang/Array.h>
#include <java/util/AbstractQueue.h>
#include <java/util/concurrent/BlockingQueue.h>

#pragma push_macro("INITIAL_CAPACITY")
#undef INITIAL_CAPACITY

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class RunnableScheduledFuture;
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

class $export ScheduledThreadPoolExecutor$DelayedWorkQueue : public ::java::util::AbstractQueue, public ::java::util::concurrent::BlockingQueue {
	$class(ScheduledThreadPoolExecutor$DelayedWorkQueue, $NO_CLASS_INIT, ::java::util::AbstractQueue, ::java::util::concurrent::BlockingQueue)
public:
	ScheduledThreadPoolExecutor$DelayedWorkQueue();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool addAll(::java::util::Collection* c) override;
	virtual $Object* clone() override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual $Object* element() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool add(::java::lang::Runnable* e);
	virtual bool add(Object$* e) override;
	virtual void clear() override;
	virtual bool contains(Object$* x) override;
	virtual int32_t drainTo(::java::util::Collection* c) override;
	virtual int32_t drainTo(::java::util::Collection* c, int32_t maxElements) override;
	::java::util::concurrent::RunnableScheduledFuture* finishPoll(::java::util::concurrent::RunnableScheduledFuture* f);
	void grow();
	int32_t indexOf(Object$* x);
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool offer(::java::lang::Runnable* x);
	virtual bool offer(::java::lang::Runnable* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit);
	virtual bool offer(Object$* x) override;
	virtual bool offer(Object$* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual $Object* peek() override;
	virtual $Object* poll() override;
	virtual $Object* poll(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual void put(::java::lang::Runnable* e);
	virtual void put(Object$* e) override;
	virtual int32_t remainingCapacity() override;
	virtual $Object* remove() override;
	virtual bool remove(Object$* x) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	static void setIndex(::java::util::concurrent::RunnableScheduledFuture* f, int32_t idx);
	void siftDown(int32_t k, ::java::util::concurrent::RunnableScheduledFuture* key);
	void siftUp(int32_t k, ::java::util::concurrent::RunnableScheduledFuture* key);
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual $Object* take() override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	static const int32_t INITIAL_CAPACITY = 16;
	$Array<::java::util::concurrent::RunnableScheduledFuture>* queue = nullptr;
	::java::util::concurrent::locks::ReentrantLock* lock = nullptr;
	int32_t size$ = 0;
	$Thread* leader = nullptr;
	::java::util::concurrent::locks::Condition* available = nullptr;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("INITIAL_CAPACITY")

#endif // _java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue_h_