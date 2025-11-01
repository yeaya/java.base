#ifndef _java_util_concurrent_PriorityBlockingQueue_h_
#define _java_util_concurrent_PriorityBlockingQueue_h_
//$ class java.util.concurrent.PriorityBlockingQueue
//$ extends java.util.AbstractQueue
//$ implements java.util.concurrent.BlockingQueue,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractQueue.h>
#include <java/util/concurrent/BlockingQueue.h>

#pragma push_macro("ALLOCATIONSPINLOCK")
#undef ALLOCATIONSPINLOCK
#pragma push_macro("DEFAULT_INITIAL_CAPACITY")
#undef DEFAULT_INITIAL_CAPACITY

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Comparator;
		class Iterator;
		class PriorityQueue;
		class Spliterator;
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
			namespace locks {
				class Condition;
				class ReentrantLock;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Predicate;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import PriorityBlockingQueue : public ::java::util::AbstractQueue, public ::java::util::concurrent::BlockingQueue, public ::java::io::Serializable {
	$class(PriorityBlockingQueue, 0, ::java::util::AbstractQueue, ::java::util::concurrent::BlockingQueue, ::java::io::Serializable)
public:
	PriorityBlockingQueue();
	virtual bool addAll(::java::util::Collection* c) override;
	virtual $Object* clone() override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual $Object* element() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	void init$();
	void init$(int32_t initialCapacity);
	void init$(int32_t initialCapacity, ::java::util::Comparator* comparator);
	void init$(::java::util::Collection* c);
	virtual bool add(Object$* e) override;
	bool bulkRemove(::java::util::function::Predicate* filter);
	virtual void clear() override;
	virtual ::java::util::Comparator* comparator();
	virtual bool contains(Object$* o) override;
	$Object* dequeue();
	virtual int32_t drainTo(::java::util::Collection* c) override;
	virtual int32_t drainTo(::java::util::Collection* c, int32_t maxElements) override;
	static $ObjectArray* ensureNonEmpty($ObjectArray* es);
	virtual void forEach(::java::util::function::Consumer* action) override;
	void heapify();
	int32_t indexOf(Object$* o);
	static bool isClear($longs* bits, int32_t i);
	virtual ::java::util::Iterator* iterator() override;
	static bool lambda$removeAll$0(::java::util::Collection* c, Object$* e);
	static bool lambda$retainAll$1(::java::util::Collection* c, Object$* e);
	static $longs* nBits(int32_t n);
	virtual bool offer(Object$* e) override;
	virtual bool offer(Object$* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual $Object* peek() override;
	virtual $Object* poll() override;
	virtual $Object* poll(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual void put(Object$* e) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual int32_t remainingCapacity() override;
	virtual $Object* remove() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	void removeAt(int32_t i);
	virtual void removeEq(Object$* o);
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	static void setBit($longs* bits, int32_t i);
	static void siftDownComparable(int32_t k, Object$* x, $ObjectArray* es, int32_t n);
	static void siftDownUsingComparator(int32_t k, Object$* x, $ObjectArray* es, int32_t n, ::java::util::Comparator* cmp);
	static void siftUpComparable(int32_t k, Object$* x, $ObjectArray* es);
	static void siftUpUsingComparator(int32_t k, Object$* x, $ObjectArray* es, ::java::util::Comparator* cmp);
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual $Object* take() override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	void tryGrow($ObjectArray* array, int32_t oldCap);
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x4DA73F88E6712814;
	static const int32_t DEFAULT_INITIAL_CAPACITY = 11;
	$ObjectArray* queue = nullptr;
	int32_t size$ = 0;
	::java::util::Comparator* comparator$ = nullptr;
	::java::util::concurrent::locks::ReentrantLock* lock = nullptr;
	::java::util::concurrent::locks::Condition* notEmpty = nullptr;
	$volatile(int32_t) allocationSpinLock = 0;
	::java::util::PriorityQueue* q = nullptr;
	static ::java::lang::invoke::VarHandle* ALLOCATIONSPINLOCK;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("ALLOCATIONSPINLOCK")
#pragma pop_macro("DEFAULT_INITIAL_CAPACITY")

#endif // _java_util_concurrent_PriorityBlockingQueue_h_