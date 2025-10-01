#ifndef _java_util_concurrent_LinkedBlockingQueue_h_
#define _java_util_concurrent_LinkedBlockingQueue_h_
//$ class java.util.concurrent.LinkedBlockingQueue
//$ extends java.util.AbstractQueue
//$ implements java.util.concurrent.BlockingQueue,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractQueue.h>
#include <java/util/concurrent/BlockingQueue.h>

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
			class LinkedBlockingQueue$Node;
			class TimeUnit;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
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

class $import LinkedBlockingQueue : public ::java::util::AbstractQueue, public ::java::util::concurrent::BlockingQueue, public ::java::io::Serializable {
	$class(LinkedBlockingQueue, $NO_CLASS_INIT, ::java::util::AbstractQueue, ::java::util::concurrent::BlockingQueue, ::java::io::Serializable)
public:
	LinkedBlockingQueue();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual $Object* clone() override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual $Object* element() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t capacity);
	void init$(::java::util::Collection* c);
	bool bulkRemove(::java::util::function::Predicate* filter);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	$Object* dequeue();
	virtual int32_t drainTo(::java::util::Collection* c) override;
	virtual int32_t drainTo(::java::util::Collection* c, int32_t maxElements) override;
	void enqueue(::java::util::concurrent::LinkedBlockingQueue$Node* node);
	virtual ::java::util::concurrent::LinkedBlockingQueue$Node* findPred(::java::util::concurrent::LinkedBlockingQueue$Node* p, ::java::util::concurrent::LinkedBlockingQueue$Node* ancestor);
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual void forEachFrom(::java::util::function::Consumer* action, ::java::util::concurrent::LinkedBlockingQueue$Node* p);
	virtual void fullyLock();
	virtual void fullyUnlock();
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	static bool lambda$removeAll$0(::java::util::Collection* c, Object$* e);
	static bool lambda$retainAll$1(::java::util::Collection* c, Object$* e);
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
	void signalNotEmpty();
	void signalNotFull();
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual ::java::util::concurrent::LinkedBlockingQueue$Node* succ(::java::util::concurrent::LinkedBlockingQueue$Node* p);
	virtual $Object* take() override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	virtual void unlink(::java::util::concurrent::LinkedBlockingQueue$Node* p, ::java::util::concurrent::LinkedBlockingQueue$Node* pred);
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0xA0304CA040E581F6;
	int32_t capacity = 0;
	::java::util::concurrent::atomic::AtomicInteger* count = nullptr;
	::java::util::concurrent::LinkedBlockingQueue$Node* head = nullptr;
	::java::util::concurrent::LinkedBlockingQueue$Node* last = nullptr;
	::java::util::concurrent::locks::ReentrantLock* takeLock = nullptr;
	::java::util::concurrent::locks::Condition* notEmpty = nullptr;
	::java::util::concurrent::locks::ReentrantLock* putLock = nullptr;
	::java::util::concurrent::locks::Condition* notFull = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_LinkedBlockingQueue_h_