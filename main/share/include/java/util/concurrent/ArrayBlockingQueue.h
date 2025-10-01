#ifndef _java_util_concurrent_ArrayBlockingQueue_h_
#define _java_util_concurrent_ArrayBlockingQueue_h_
//$ class java.util.concurrent.ArrayBlockingQueue
//$ extends java.util.AbstractQueue
//$ implements java.util.concurrent.BlockingQueue,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractQueue.h>
#include <java/util/concurrent/BlockingQueue.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ArrayBlockingQueue$Itrs;
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

class $import ArrayBlockingQueue : public ::java::util::AbstractQueue, public ::java::util::concurrent::BlockingQueue, public ::java::io::Serializable {
	$class(ArrayBlockingQueue, $NO_CLASS_INIT, ::java::util::AbstractQueue, ::java::util::concurrent::BlockingQueue, ::java::io::Serializable)
public:
	ArrayBlockingQueue();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool addAll(::java::util::Collection* c) override;
	virtual $Object* clone() override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual $Object* element() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t capacity);
	void init$(int32_t capacity, bool fair);
	void init$(int32_t capacity, bool fair, ::java::util::Collection* c);
	virtual bool add(Object$* e) override;
	bool bulkRemove(::java::util::function::Predicate* filter);
	bool bulkRemoveModified(::java::util::function::Predicate* filter, int32_t beg);
	virtual void checkInvariants();
	static void circularClear($ObjectArray* items, int32_t i, int32_t end);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	static int32_t dec(int32_t i, int32_t modulus);
	$Object* dequeue();
	int32_t distanceNonEmpty(int32_t i, int32_t j);
	virtual int32_t drainTo(::java::util::Collection* c) override;
	virtual int32_t drainTo(::java::util::Collection* c, int32_t maxElements) override;
	void enqueue(Object$* e);
	virtual void forEach(::java::util::function::Consumer* action) override;
	static int32_t inc(int32_t i, int32_t modulus);
	bool invariantsSatisfied();
	static bool isClear($longs* bits, int32_t i);
	virtual bool isEmpty() override;
	$Object* itemAt(int32_t i);
	static $Object* itemAt($ObjectArray* items, int32_t i);
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
	virtual void removeAt(int32_t removeIndex);
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	static void setBit($longs* bits, int32_t i);
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual $Object* take() override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xF4A631B41E106F86;
	$ObjectArray* items = nullptr;
	int32_t takeIndex = 0;
	int32_t putIndex = 0;
	int32_t count = 0;
	::java::util::concurrent::locks::ReentrantLock* lock = nullptr;
	::java::util::concurrent::locks::Condition* notEmpty = nullptr;
	::java::util::concurrent::locks::Condition* notFull = nullptr;
	::java::util::concurrent::ArrayBlockingQueue$Itrs* itrs = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ArrayBlockingQueue_h_