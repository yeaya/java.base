#ifndef _java_util_concurrent_SynchronousQueue_h_
#define _java_util_concurrent_SynchronousQueue_h_
//$ class java.util.concurrent.SynchronousQueue
//$ extends java.util.AbstractQueue
//$ implements java.util.concurrent.BlockingQueue,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractQueue.h>
#include <java/util/concurrent/BlockingQueue.h>

#pragma push_macro("SPIN_FOR_TIMEOUT_THRESHOLD")
#undef SPIN_FOR_TIMEOUT_THRESHOLD

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
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
			class SynchronousQueue$Transferer;
			class SynchronousQueue$WaitQueue;
			class TimeUnit;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export SynchronousQueue : public ::java::util::AbstractQueue, public ::java::util::concurrent::BlockingQueue, public ::java::io::Serializable {
	$class(SynchronousQueue, 0, ::java::util::AbstractQueue, ::java::util::concurrent::BlockingQueue, ::java::io::Serializable)
public:
	SynchronousQueue();
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual $Object* clone() override;
	virtual $Object* element() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(bool fair);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual int32_t drainTo(::java::util::Collection* c) override;
	virtual int32_t drainTo(::java::util::Collection* c, int32_t maxElements) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool offer(Object$* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual bool offer(Object$* e) override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual $Object* peek() override;
	virtual $Object* poll(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual $Object* poll() override;
	virtual void put(Object$* e) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual int32_t remainingCapacity() override;
	virtual $Object* remove() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
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
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0xD345336E1F5C3E9A;
	static const int64_t SPIN_FOR_TIMEOUT_THRESHOLD = (int64_t)1023;
	$volatile(::java::util::concurrent::SynchronousQueue$Transferer*) transferer = nullptr;
	::java::util::concurrent::locks::ReentrantLock* qlock = nullptr;
	::java::util::concurrent::SynchronousQueue$WaitQueue* waitingProducers = nullptr;
	::java::util::concurrent::SynchronousQueue$WaitQueue* waitingConsumers = nullptr;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("SPIN_FOR_TIMEOUT_THRESHOLD")

#endif // _java_util_concurrent_SynchronousQueue_h_